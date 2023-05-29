//jshint esversion:6
const bodyparser = require("body-parser");
const express = require("express");
const https = require("https");
const app = express();

app.use(bodyparser.urlencoded({extended:true}));

app.get("/", function(req, res){
    res.sendFile(__dirname + "/index.html");
})

app.post("/", function(req, res){
    let cityname = req.body.city;
    console.log(cityname);
    const url = "https://api.openweathermap.org/data/2.5/weather?q=" + cityname +"&appid=c7bc4bd9e943202fcabba0c70b93e1cc&units=metric";
    https.get(url, function(response){
        console.log(response.statusCode);
        response.on("data", function(data){
            const weatherdata = JSON.parse(data);
            const temprature = weatherdata.main.temp;
            const weatherdescription = weatherdata.weather[0].description;
            const weathericon = weatherdata.weather[0].icon;
            console.log(temprature + " degree Celcius");
            res.write("<h1>" + weatherdescription + " in " + cityname  + "</h1>")
            res.write("<h1>temprature is " + temprature + " degrees celcius<br>")
            res.write("<img src='https://openweathermap.org/img/wn/" + weathericon + "@2x.png'>")
            res.send();
        })
    });
})
app.listen(3000, function(){
    console.log("server started at port 3000");
})
//jshint esversion:6
const express = require("express");
const bodyparser = require("body-parser");
const app = express();
app.use(bodyparser.urlencoded({extended:true}));

app.get("/",function(req, res){
    res.sendFile(__dirname + "/index.html");
})

app.post("/",function(req, res){
    let n1 = parseInt(req.body.n1);
    let n2 = parseInt(req.body.n2);
    res.send("<h1>The sum of the number is:" + (n1 + n2) + "</h1>");
});

app.get("/BMICalculator.html", function(req, res){
    res.sendFile(__dirname + "/BMICalculator.html");
})

app.post("/BMICalculator.html", function(req, res){
    let height = parseInt(req.body.height);
    let weight = parseInt(req.body.weight);
    res.send("<h1>Your BMI is :" + (height + weight) + "</h1>")
})

app.listen(3000, function(){
    console.log("server started at port 3000");
})
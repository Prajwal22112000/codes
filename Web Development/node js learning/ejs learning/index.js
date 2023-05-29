const express = require("express");
const bodyparser = require("body-parser");
const https = require("https");
const ejs = require("ejs");
const exp = require("constants");
const { dirname } = require("path");
const randomname = require(__dirname + "/functions.js");

const app = express();

let itemsarray = [];
let notes = [];

app.use(bodyparser.urlencoded({extended:true}));
app.use(express.static("files"));
app.set("view engine", "ejs");

app.get( "/" ,function(req, res){
    let date = new Date();
    res.render("list", {currentdate:date.toDateString(), items:itemsarray});
})

app.post( "/", function(req, res){
    let item = req.body.item;
    if(item == ""){
        res.redirect("/")
    }else{
        itemsarray.push(item);
        res.redirect("/");
    }
})

app.get("/notes", (req, res) => {
    res.render("notes", {banner: "Hey Everyone", items: notes});
})

app.post("/notes", (req, res) => {
    // res.render("notes", {banner: "Hey Everyone"});
    let item = req.body.item;
    if(item == ""){
        res.redirect("/notes")
    }else{
        notes.push(item);
        res.redirect("/notes");
    }
})

app.listen(3000, function(){
    console.log("server started at port 3000");
    console.log(randomname.returnname(3));
});

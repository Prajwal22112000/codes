//jshint esversion:6
const express = require("express");
const bodyparser = require("body-parser")
const mongodb = require("mongodb")
// const express = require("express")
const app = express();

app.listen(5000, function(err){
    if(err){
        console.log(err);
    }
})

// app.listen(500)
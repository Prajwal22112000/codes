//jshint esversion:6
const express = require("express");
const mongodb = require("mongodb");
const mongoose = require("mongoose");
const bodyparser = require("body-parser");
const https = require("https");
const ejs = require("ejs");
const _ = require("lodash");
const bodyParser = require("body-parser");
const { table } = require("console");
const app = express();

app.set('view engine', 'ejs');
app.use(express.static("public"));
app.use(bodyparser.urlencoded({extended:true}));

mongoose.connect("mongodb://127.0.0.1:27017/todos");

const todoSchema = mongoose.Schema({
    name: {type: String, required: true},
});

let Todo, title;
const collections = ["todo"];

//to start the default home screen
app.get("/", (req, res)=>{
    Todo = mongoose.model("todo", todoSchema);
    Todo.find({}, (err, items)=>{
        res.render("home", {page:"TO DO LIST", array:items, title:"todo"});
        // console.log(items);
    });
});

// show all the collections in the seletected database;
app.get("/showcollections" ,(req,res)=>{
    console.log(collections);
})

// post request that will allow user to add their own path
app.get("/:path", (req, res)=>{
    title = req.params.path;
    if(collections.includes(title) === false){
        collections.push(title);
    }
    console.log(req.body);
    Todo = mongoose.model( title, todoSchema );
    Todo.find({}, (err, items)=>{
        res.render("home", {page:title.toUpperCase(), array:items, title:title });
    });
})

//to get the post request from the server to add new items in the database of mongodb
app.post("/", (req, res)=>{
    title = _.toLower(req.body.title);
    console.log(title);
    Todo = mongoose.model(title, todoSchema);
    if(req.body.item != ""){
        const item = new Todo({
            name:req.body.item
        });
        item.save();
    }
    if(title === "todo"){
        res.redirect("/");
    }
    res.redirect("/" + title);
})

// post request received to remove the checked item
app.post("/checked", (req, res)=>{
    title =  _.toLower(req.body.title);
    console.log(req.body);
    Todo = mongoose.model(title, todoSchema);
    Todo.deleteOne({name:req.body.item}, (err)=>{
        if(err){
            console.log(err);
        }else{
            console.log("deleted successfully");
        }
    })
    if(title === "todo"){
        res.redirect("/");
    }else{
        res.redirect("/" + title);
    }
})

// LISTEN TO THIS PORT NUMBER
app.listen(3000, (err)=>{
    console.log("server started at port 3000");
})
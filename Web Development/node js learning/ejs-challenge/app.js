//jshint esversion:6

const express = require("express");
const bodyParser = require("body-parser");
const ejs = require("ejs");
const _ = require("lodash");
const app = express();
const mongoose = require("mongoose");
const mongodb= require("mongodb");

app.set('view engine', 'ejs');
app.use(bodyParser.urlencoded({extended:true}));
app.use(express.static("public"));

mongoose.connect("mongodb://127.0.0.1:27017/posts");
const postsSchema = mongoose.Schema({
  title:{type:String},
  content:{type:String}
})
const Post = mongoose.model("post", postsSchema);

const homeStartingContent = "Lacus vel facilisis volutpat est velit egestas dui id ornare. Semper auctor neque vitae tempus quam. Sit amet cursus sit amet dictum sit amet justo. Viverra tellus in hac habitasse. Imperdiet proin fermentum leo vel orci porta. Donec ultrices tincidunt arcu non sodales neque sodales ut. Mattis molestie a iaculis at erat pellentesque adipiscing. Magnis dis parturient montes nascetur ridiculus mus mauris vitae ultricies. Adipiscing elit ut aliquam purus sit amet luctus venenatis lectus. Ultrices vitae auctor eu augue ut lectus arcu bibendum at. Odio euismod lacinia at quis risus sed vulputate odio ut. Cursus mattis molestie a iaculis at erat pellentesque adipiscing.";
const aboutContent = "Hac habitasse platea dictumst vestibulum rhoncus est pellentesque. Dictumst vestibulum rhoncus est pellentesque elit ullamcorper. Non diam phasellus vestibulum lorem sed. Platea dictumst quisque sagittis purus sit. Egestas sed sed risus pretium quam vulputate dignissim suspendisse. Mauris in aliquam sem fringilla. Semper risus in hendrerit gravida rutrum quisque non tellus orci. Amet massa vitae tortor condimentum lacinia quis vel eros. Enim ut tellus elementum sagittis vitae. Mauris ultrices eros in cursus turpis massa tincidunt dui.";
const contactContent = "Scelerisque eleifend donec pretium vulputate sapien. Rhoncus urna neque viverra justo nec ultrices. Arcu dui vivamus arcu felis bibendum. Consectetur adipiscing elit duis tristique. Risus viverra adipiscing at in tellus integer feugiat. Sapien nec sagittis aliquam malesuada bibendum arcu vitae. Consequat interdum varius sit amet mattis. Iaculis nunc sed augue lacus. Interdum posuere lorem ipsum dolor sit amet consectetur adipiscing elit. Pulvinar elementum integer enim neque. Ultrices gravida dictum fusce ut placerat orci nulla. Mauris in aliquam sem fringilla ut morbi tincidunt. Tortor posuere ac ut consequat semper viverra nam libero.";

let composedcontent;
app.get("/", async (req, res)=>{
  let composedcontent = await Post.find({});
  console.log(composedcontent)
  res.render("home", {homecontent:homeStartingContent, postedcontent:composedcontent});
})

app.get("/about", (req, res)=>{
  res.render("about", {aboutcontent:aboutContent});
})

app.get("/contact", (req, res)=>{
  res.render("contact", {contactcontent:contactContent});
})

app.get("/compose", (req, res)=>{
  res.render("compose")
})

app.get("/delete", (req, res)=>{
  res.render("delete", {deleted:""});
})

app.get("/posts/:items", async (req,res)=>{
  let reqParams = _.lowerCase(req.params.items);
  // console.log(reqParams);
  let composedcontent = await Post.find({title:reqParams});
  if(composedcontent.toString() == ""){
    console.log("doesn't exist");
    res.render("post", {postContent:[{title:"ERROR 404",content:"OOPS! The Page You are looking for doesn't exist"}]});
  }else{
    res.render("post", {postContent:composedcontent});
  }
})

app.post("/compose", (req,res) => {
  let post = new Post({
    title:req.body.postTitle,
    content:req.body.postBody
  })
  post.save();
  res.redirect("/");
});

app.post("/delete", async (req,res) => {
  // console.log(req.body);
  if(req.body.password === "6969420420"){
    let deleted = await Post.deleteOne({title:req.body.title})
    console.log(deleted);
    res.render("delete", {deleted:deleted.deletedCount});
  }
  else{
    console.log("password is incorrect");
    res.render("delete", {deleted:"wrong"});
  }
});

app.listen(3000, function() {
  console.log("Server started on port 3000");
});

require('dotenv').config();
const express = require("express")
app = express()
const mongoose = require("mongoose")

mongoose.connect(process.env.DATABASE_URL);
// mongoose.connect("mongodb://127.0.0.1:27017/subscribers");
const db = mongoose.connection
db.on("error", (error) => console.error(error))
db.once("open", () => console.log("connected to databse"))

app.use(express.json())

const studentsRouter = require("./routes/students.js");

app.use("/students", studentsRouter)

app.listen(3000, ()=> console.log("Server Started at port 3000"))
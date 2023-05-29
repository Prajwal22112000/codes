const express = require("express");
const router = express.Router();
const Student = require("../models/student.js");

//getting all subscribers
router.get("/", async (req, res,)=>{
    try {
        const students = await Student.find({});
        res.json(students);
    } catch(err){
        res.status(500).json({message:err.message});
    }
    console.log("Hello World")
})


//getting one subscriber
router.get("/:id" ,(req, res,)=>{
    res.send(res.student);
});


//getting creating one subscriber
router.post("/", async (req, res)=>{
    const student = new Student({
        name:req.body.name,
        age:req.body.age,
        skills:req.body.skills
    })

    try {
        const newStudent = await student.save();
        res.status(201).json(newStudent);
    } catch (err){
        res.status(400).json({message:err.message});
    }
})


//getting updating subscriber
router.patch(":id", getStudent ,(req, res) => {
    console.log("patch called");
})


//getting deleting subscriber
// router.delete(":id", async (req, res) => {
//     // console.log(res.student);
//     let id = req.params.id;
//     try {
//         let student = await Student.deleteOne({_id:id}).exec();
//         if (student == null){
//             res.status(405).json({message:"cannot find the student"});
//         }else{
//             res.status(200).json({message:"deleted subscribers"})
//         }
//     }catch (err){
//         res.status(500).json({message:err.message})
//     }
// })

router.delete(":id", getStudent, (req, res)=>{
    console.log(req.params.id);
    res.status(200.).json({message:"all fine"})
})


//middleware function
async function getStudent( req, res, next){
    let student;
    // console.log("get student called");
    // console.log(req.params.id);
    // console.log("fdslf");
    let id = req.params.id;
    try {
        student = await Student.findOne({_id:id}).exec();
        console.log(student);
        if(student === null){
            return res.status(405).json({message:"cannot find student"});
        }
    }catch(err) {
        return res.status(500).json({message:err.message});
    }
    res.student = student;
    next();
}

module.exports = router;
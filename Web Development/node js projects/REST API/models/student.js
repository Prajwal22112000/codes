const mongoose = require("mongoose");

const studentSchema = new mongoose.Schema({
    name: {
        type: String,
        required: true,
    },
    age:{
        type: Number,
        required: true,

    },
    skills:{
        type: Array,
        required: true,
        default: [""],
    }
})

module.exports = mongoose.model("Student",studentSchema)
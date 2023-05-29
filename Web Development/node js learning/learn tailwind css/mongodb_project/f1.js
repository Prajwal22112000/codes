const mongoose = require("mongoose");

mongoose.connect("mongodb://127.0.0.1:27017/f1");

const teamSchema = new mongoose.Schema({
    name:String,
    wins:String
});

const driverSchema = new mongoose.Schema({
    name:String,
    age:Number,
    team:teamSchema
});


const Driver = mongoose.model("driver", driverSchema);
const Team = mongoose.model("team", teamSchema);

Ferrari = new Team({
    name:"Ferrari",
    wins:12
})

McLaren = new Team({
    name:"McLaren",
    wins:8
});

Mercedes = new Team({
    name:"Mercedes",
    wins:7
});

RedBull = new Team({
    name:"Red Bull",
    wins:6
});

Charles = new Driver({
    name:"Charles Leclerc",
    age:26,
    team:Ferrari
});

Hamilton = new Driver({
    name:"Lewis Hamilton",
    age:33,
    team:Mercedes
});

Max = new Driver({
    name:"Max Verstappan",
    age:25,
    team:RedBull
});

Alonso = new Driver({
    name:"Fernando Alonso",
    age:41,
    team:McLaren
});

Michael = new Driver ({
    name:"Michael Schumacher",
    age:45
})

Alpine = new Team({
    name:"Alpine",
    wins:0
})

// Team.insertMany([Alpine]);

// Team.insertMany([Ferrari, McLaren, Mercedes, RedBull], (err)=>{
//     if(err){
//         console.log(err);
//     }else{
//         console.log("inserted successfully!!!");
//     }
// });

function insertDocument(){
    const result =  Driver.insertMany([Michael], (err)=>{
    if(err){
        console.log(err);
    }else{
        console.log("inserted successfully!!!");
        console.log(result);
    }
});
}

// insertDocument();

async function updateDocument(){
    try {
        const result = await Driver.updateOne({name:"Michael Schumacher"},{team:Ferrari});
        console.log(result);
        mongoose.connection.close();
    }
    catch (err){
        console.log(err);
    }
}

async function deleteDocument(){
    try{
        const result =  await Driver.deleteOne({name:"Michael Schumacher"});
    }
    catch (err){
        console.log(err);
    }
}

// deleteDocument();
updateDocument();

// Driver.collection.insertOne({name:"Michael Schumacher", wins:8});

Driver.find((err,array)=>{
    if(err){
        console.log(err);
    }else{
        // mongoose.connection.close();
        console.log(array.name);
    }
}) ;

module.exports = Team
module.exports = Driver
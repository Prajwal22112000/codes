.find((err,array)=>{
    if(err){
        console.log(err);
    }else{
        mongoose.connection.close();
        console.log(array);
    }
}) ;
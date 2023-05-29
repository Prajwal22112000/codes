exports.returnname = (num) => {
    let arr = ["prajwal", "asphalt", "nfs", "DOTA", "COD", "fortnite", "GOD OF WAR", "lol", "iwantsamosa", "whyislove"];
    let haha = [];
    for(let i = 0; i < num; i++){
        haha.push(arr[Math.floor(Math.random() * arr.length)]);
    }
    return haha;
};
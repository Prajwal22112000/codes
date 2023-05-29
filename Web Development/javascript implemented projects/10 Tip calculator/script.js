var people = document.getElementById("people");
var bill = document.getElementById("bill");
var quality = document.getElementById("quality");
var tipid = document.getElementById("tip");

function calculate() {
    var tip = ((people.value*bill.value*quality.value)).toFixed(2);
    
    people.value = "";
    bill.value = "";
    quality.value = "";
    if (tip === 'Nan') {
        tipid.innerHTML =  "Tip 0$ each";3
    }
    else{
        tipid.innerHTML = "TIp $" + tip + " each";
        showtip();
    }
}
showtip = () => {
    var z = tipid;
    z.className = 'show';
    setTimeout(function(){z.className = z.className.replace('show', '');}, 3000);
}
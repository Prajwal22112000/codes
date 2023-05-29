const groceries = document.getElementsByClassName("input")[0];
const pencil = document.getElementById("pencil");
const allItems = document.getElementById("display");
const input = document.getElementById("userinput");

pencil.addEventListener("click", function(){
    allItems.innerHTML = "";
})

input.addEventListener("keydown", function(event){
    if(event.key == "Enter"){
        add();
    }
})
function add(){
    var h2 = document.createElement("h2");
    h2.innerHTML = "- " + input.value;

    h2.addEventListener("click", function(){
        h2.style.textDecoration = "line-through";
    })

    allItems.insertAdjacentElement("beforeend", h2);
    input.value = "";
}
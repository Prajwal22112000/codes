const falshcards = document.getElementsByClassName("cards")[0];
const createbox = document.getElementsByClassName("cardbody")[0];
const question = document.getElementById("question");
const answer = document.getElementById("answer");
let array = localStorage.getItem('items') ? JSON.parse(localStorage.getItem('items')) : [] ;

function delCard(){
    localStorage.clear();
    falshcards.innerHTML = '';
    array = [];
}
function newCard(){
    createbox.style.display = 'block';
}
function Close(){
    createbox.style.display = "none";
}

array.forEach(divMaker);

function divMaker(text){
    var div = document.createElement("div");
    var h2question = document.createElement("h2");
    var h5answer = document.createElement("h5");

    div.className = 'card';
    h2question.setAttribute('style', "border-bottom: 1px solid red; padding: 0.3rem;");

    h2question.innerHTML = text.myquestion;

    h5answer.setAttribute('style', "display:none; margin-top: 1rem; padding: 0.5rem; color:red; text-align:center; height:auto;");

    h5answer.innerHTML = text.myanswer;

    div.appendChild(h2question);
    div.appendChild(h5answer);

    div.addEventListener("click", function(){
        // h5answer.style.display = block?none:block;
        if(h5answer.style.display == "block"){ 
            h5answer.style.display = "none";
        }
        else if(h5answer.style.display == "none"){
            h5answer.style.display = "block";
        }
    });
    falshcards.appendChild(div);
}

function Savecard(){
    var falshcardinfo = {
        'myquestion' : question.value,
        'myanswer' : answer.value
    }

    array.push(falshcardinfo);
    localStorage.setItem('items',  JSON.stringify(array));
    divMaker(array[array.length - 1]);
    question.value = '';
    answer.value = '';
}

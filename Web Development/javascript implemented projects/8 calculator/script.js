const userinput = document.getElementById("input");
var expression = '';

function press(num){
    expression += num;
    userinput.value = expression;
}
function sum() {
    userinput.value = eval(expression);
    expression = '';
}

function erase(){
    expression = '';
    userinput.value = expression;
}
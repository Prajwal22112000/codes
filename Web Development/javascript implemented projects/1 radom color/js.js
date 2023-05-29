var index = 0

function colorchange(){
    var colors = ["red", "green", "blue", "orange", "purple", "pink", "cyan", "yellow" ];
    
    document.getElementsByTagName("body")[0].style.background = colors[index++];
    document.getElementsByTagName("button")[0].style.backgroundColor = colors[index++];
    // document.getElementsByTagName("button")[0].style.transform.

    if(index > colors.length - 1){
        index = 0;
    }
}
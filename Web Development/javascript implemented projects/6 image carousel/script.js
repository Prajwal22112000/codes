var index = 0;

show_image(index);

function show_image(num){
    index += num;

    var images = document.getElementsByClassName("image");

    var dots = document.getElementsByClassName("dot");

    for (let i = 0; i < images.length; i++) {
        images[i].style.display = "none";
    }

    for (let i = 0; i < dots.length; i++) {
        dots[i].className = dots[i].className.replace("active", "");
    }

    if (index > images.length -1) {
        index = 0;
    }

    if(index < 0){
        index = images.length - 1;
    }

    images[index].style.display = "block";
    dots[index].className += "active"; 
}

function quote() {
    var quotes = {
        "- Prajwal Negi" : '"Noice !"',
        "- Kuldeep Yadav": '"Bruh!!!"',
        "- Megha Rani": '"KOO- Morning !"',
        "- Pryanshu Singh": '"Bhai sachi ek bhi rupya nahi hai !!!"',
        "- Aman Ali": '"Bss kat rahi hai bhai"',
        "- Vikas Singh": '"Chalo mai chlta hu sone !"'
    }
    var authors = Object.keys(quotes);
    var author = authors[Math.floor(Math.random()*authors.length)];
    var quote = quotes[author];
    document.getElementById("quote").innerHTML = quote;
    document.getElementById("author").innerHTML = author;
}
let str = prompt("Enter a sentence:");

let words = str.split(" ");

document.write("Words in the string:<br>");

for (let i = 0; i < words.length; i++) {
    document.write(words[i] + "<br>");
}

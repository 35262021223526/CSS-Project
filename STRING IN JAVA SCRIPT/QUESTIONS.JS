let str = prompt("Enter a sentence:");
let result = "";

for (let i = 0; i < str.length; i++) {
    let ch = str[i];

    if (ch >= 'a' && ch <= 'z') {
        result += ch.toUpperCase();
    } else if (ch >= 'A' && ch <= 'Z') {
        result += ch.toLowerCase();
    } else {
        result += ch; // Keep numbers and special characters as they are
    }
}

document.write("Original sentence: " + str + "<br>");
document.write("After case conversion: " + result);

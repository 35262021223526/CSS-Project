let str = prompt("Enter a string:");
str = str.toLowerCase(); // convert to lowercase for easy comparison

let vowels = 0, consonants = 0;

for (let i = 0; i < str.length; i++) {
    let ch = str[i];

    if (ch >= 'a' && ch <= 'z') {   // check if alphabet
        if (ch === 'a' || ch === 'e' || ch === 'i' || ch === 'o' || ch === 'u') {
            vowels++;
        } else {
            consonants++;
        }
    }
}

document.write("Total vowels: " + vowels + "<br>");
document.write("Total consonants: " + consonants);

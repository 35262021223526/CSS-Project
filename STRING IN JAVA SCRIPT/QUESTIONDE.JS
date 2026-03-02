let str = prompt("Enter a string:");
str = str.toLowerCase();

let repeated = "";
let count = {};

for (let i = 0; i < str.length; i++) {
    let ch = str[i];

    if (ch >= 'a' && ch <= 'z') {   // check only alphabets
        count[ch] = (count[ch] || 0) + 1;
    }
}

for (let key in count) {
    if (count[key] > 1) {
        repeated += key + " ";
    }
}

if (repeated === "") {
    document.write("No repeated characters found.");
} else {
    document.write("Repeated characters: " + repeated);
}

let str = prompt("Enter a string:");
let count = {};

for (let i = 0; i < str.length; i++) {
    let ch = str[i];

    if (count[ch]) {
        count[ch]++;
    } else {
        count[ch] = 1;
    }
}

document.write("Character frequency:<br>");

for (let key in count) {
    document.write(key + " : " + count[key] + "<br>");
}

let str = prompt("Enter a string:");

let alphabets = 0;
let digits = 0;
let specialChars = 0;

for (let i = 0; i < str.length; i++) {
    let ch = str[i];

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        alphabets++;
    } 
    else if (ch >= '0' && ch <= '9') {
        digits++;
    } 
    else {
        specialChars++;
    }
}

document.write("Total Alphabets: " + alphabets + "<br>");
document.write("Total Digits: " + digits + "<br>");
document.write("Total Special Characters: " + specialChars);

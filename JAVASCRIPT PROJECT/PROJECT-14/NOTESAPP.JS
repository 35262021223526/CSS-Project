// -----------------------------------------
// Notes App (JavaScript Only + LocalStorage)
// -----------------------------------------

// Load notes from localStorage or create empty array
let notes = JSON.parse(localStorage.getItem("notes")) || [];

// Save notes back to localStorage
function saveNotes() {
    localStorage.setItem("notes", JSON.stringify(notes));
}

// Add a new note
function addNote(text) {
    notes.push(text);
    saveNotes();
    console.log("Note added:", text);
}

// View all notes
function viewNotes() {
    console.log("----- Your Notes -----");

    if (notes.length === 0) {
        console.log("No notes available.");
        return;
    }

    notes.forEach((note, index) => {
        console.log(`${index + 1}. ${note}`);
    });
}

// Delete a note by index
function deleteNote(index) {
    if (index < 1 || index > notes.length) {
        console.log("Invalid note index!");
        return;
    }

    let removed = notes.splice(index - 1, 1);
    saveNotes();
    console.log("Deleted Note:", removed[0]);
}

// -----------------------------------------
// Example Usage (Run in Console)
// -----------------------------------------

// addNote("Learn JavaScript");
// addNote("Complete Notes App project");
// viewNotes();
// deleteNote(1);
// viewNotes();

// ----------------------------------------------------
// Chat App (JavaScript Only) – Uses DOM + LocalStorage
// ----------------------------------------------------

// Get DOM references
const input = document.getElementById("messageInput");
const sendBtn = document.getElementById("sendBtn");
const chatBox = document.getElementById("chatBox");

// Load old messages from localStorage
let messages = JSON.parse(localStorage.getItem("chatMessages")) || [];

// Save to localStorage
function saveMessages() {
    localStorage.setItem("chatMessages", JSON.stringify(messages));
}

// Render chat messages to screen
function renderMessages() {
    chatBox.innerHTML = "";

    messages.forEach(msg => {
        const div = document.createElement("div");
        div.className = msg.sender === "you" ? "youMsg" : "botMsg";

        div.innerHTML = `
            <p><strong>${msg.sender === "you" ? "You" : "Bot"}:</strong> ${msg.text}</p>
            <small>${msg.time}</small>
        `;

        chatBox.appendChild(div);
    });

    chatBox.scrollTop = chatBox.scrollHeight;
}

// Send message
function sendMessage() {
    const text = input.value.trim();
    if (text === "") return;

    const time = new Date().toLocaleTimeString();

    // Push user message
    messages.push({
        sender: "you",
        text,
        time
    });

    saveMessages();
    renderMessages();

    input.value = "";

    // Fake bot reply after 1 sec
    setTimeout(() => {
        const botReply = {
            sender: "bot",
            text: "Got your message!",
            time: new Date().toLocaleTimeString()
        };

        messages.push(botReply);
        saveMessages();
        renderMessages();
    }, 1000);
}

// Event Listeners
sendBtn.addEventListener("click", sendMessage);

input.addEventListener("keydown", (e) => {
    if (e.key === "Enter") sendMessage();
});

// Initial render
renderMessages();

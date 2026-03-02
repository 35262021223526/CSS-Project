// Quiz App using Callbacks + IIFE

(function () {

    // Array of question objects
    const questions = [
        {
            question: "What is the capital of India?",
            options: ["1) Delhi", "2) Mumbai", "3) Kolkata"],
            answer: 1
        },
        {
            question: "Which is the largest planet?",
            options: ["1) Earth", "2) Jupiter", "3) Mars"],
            answer: 2
        },
        {
            question: "What does HTML stand for?",
            options: ["1) HyperText Markup Language", 
                      "2) HighText Machine Language", 
                      "3) Home Tool Markup Language"],
            answer: 1
        }
    ];

    // Callback function to check answers
    function checkAnswer(correctAnswer, userAnswer) {
        return correctAnswer === userAnswer;
    }

    // Start quiz
    function startQuiz() {
        let score = 0;

        questions.forEach((q) => {
            let userInput = prompt(
                q.question + "\n" + q.options.join("\n") + "\nEnter your option number:"
            );

            let userAnswer = parseInt(userInput);

            if (checkAnswer(q.answer, userAnswer)) {
                alert("Correct!");
                score++;
            } else {
                alert("Wrong!");
            }
        });

        alert("Quiz Completed! Your Score: " + score + "/" + questions.length);
    }

    // Auto-start quiz
    startQuiz();

})();

# 📝 Online Quiz System in C

This is a simple console-based Online Quiz System written in C, supporting login for students and teachers. It includes timed tests on Math, Science, and General Knowledge, with auto-evaluation and result display.


---

# 📚 Features

## 🔐 Login System:

Students and one teacher can log in.

Credentials are hardcoded.


## 🧠 Three Subject Tests:

Math

Science

General Knowledge


## ⏳ Time Constraint:

Each test must be completed within 40 seconds.


## 📈 Scoring & Feedback:

Each test has 5 questions.

Pass mark: 3 or more.

Results displayed after each test.


## 👨‍🏫 Teacher Access:

Can view correct answers to all questions.

Cannot modify any question/answer.




---

# 👨‍💻 User Credentials

## 👩‍🎓 Students

Username	Password

roshan	1234
ganesh	1234
sarthak	1234


## 👨‍🏫 Teacher

Username	Password

teacher	crusher



---

# ▶️ How to Run

1. Save the code as quiz_system.c.


2. Compile using a C compiler (e.g. GCC):

gcc quiz_system.c -o quiz


3. Run the program:

./quiz




---

# 📌 Instructions

1. Only one exam per login.


2. No use of electronic devices.


3. You have 40 seconds to complete the test.


4. Only one answer per question is allowed.


5. Minimum 3 correct answers to pass.


6. Teacher can only view answers, not modify them.




---

# ✅ Sample Output

## INSTRUCTIONS

this  test is only for practising online exam
...
Enter your choice:
1. Student Login
2. Teacher Login


---

# 🛠️ Possible Improvements

Dynamic user registration and database integration.

GUI version using C++/GTK or web-based frontend.

Randomized question sets.

Timer for each question instead of full test.



---

# 📄 License

This project is for educational purposes only. Free to use, modify, and learn from.

#include <stdio.h>
#include <string.h>
#include <time.h>

struct User {
char username[20];
char password[20];
};

void mathTest() {
int score = 0;
char ans;
time_t start, now;

printf("\n.............Math Test...............\n");  
time(&start);  

printf("Q1. What is 5 + 3?\n");  
printf("A. 6\nB. 7\nC. 8\nD. 9\nYour answer: ");  
time(&now);  
if (difftime(now, start) > 40) goto endMath;  
scanf(" %c", &ans);  
if (ans == 'C' || ans == 'c') {  
    score++;  
        printf("correct\n\n");}  
else{  
    printf("you choose wrong option\n\n");  
}  

printf("Q2. What is 12 * 2?\n");  
printf("A. 24\nB. 22\nC. 20\nD. 26\nYour answer: ");  
time(&now);  
if (difftime(now, start) > 40) goto endMath;  
scanf(" %c", &ans);  
if (ans == 'A' || ans == 'a') {  
    score++;  
        printf("correct\n\n");}  
else{  
    printf("you choose wrong option\n\n");  
}  

printf("Q3. What is the square root of 16?\n");  
printf("A. 5\nB. 4\nC. 3\nD. 6\nYour answer: ");  
time(&now);  
if (difftime(now, start) > 40) goto endMath;  
scanf(" %c", &ans);  
if (ans == 'B' || ans == 'b') {  
    score++;  
        printf("correct\n\n");}  
else{  
    printf("you choose wrong option\n\n");  
}  

printf("Q4. What is 45 / 5?\n");  
printf("A. 9\nB. 10\nC. 8\nD. 7\nYour answer: ");  
time(&now);  
if (difftime(now, start) > 40) goto endMath;  
scanf(" %c", &ans);  
if (ans == 'A' || ans == 'a') {  
    score++;  
        printf("correct\n\n");}  
else{  
    printf("you choose wrong option\n\n");  
}  

printf("Q5. What is 7 squared?\n");  
printf("A. 49\nB. 42\nC. 56\nD. 36\nYour answer: ");  
time(&now);  
if (difftime(now, start) > 40) goto endMath;  
scanf(" %c", &ans);  
if (ans == 'A' || ans == 'a'){  
    score++;  
        printf("correct\n\n");}  
else{  
    printf("you choose wrong option\n\n");  
}

endMath:
printf("\nTime's up or test completed!\n");
printf("Your Math Score: %d/5\n", score);
if(score<=2){
printf("pass/fail : fail\n");
printf("YOU HAVE TO FOCUS ON STUDY NOW\n ");
}else{
printf("pass/fail : pass\n");
printf("CONGRATS!,good job brother\n");
}
}

void scienceTest() {
int score = 0;
char ans;
time_t start, now;

printf("\n.................. Science Test...................\n");  
time(&start);  

printf("Q1. What planet is known as the Red Planet?\n");  
printf("A. Earth\nB. Mars\nC. Venus\nD. Saturn\nYour answer: ");  
time(&now);  
if (difftime(now, start) > 40) goto endScience;  
scanf(" %c", &ans);  
if (ans == 'B' || ans == 'b') {  
    score++;  
    printf("correct\n\n");}  
else{  
    printf("you choose wrong option\n\n");  
}  

printf("Q2. Water freezes at?\n");  
printf("A. 0°C\nB. 100°C\nC. 50°C\nD. -10°C\nYour answer: ");  
time(&now);  
if (difftime(now, start) > 40) goto endScience;  
scanf(" %c", &ans);  
if (ans == 'A' || ans == 'a') {  
    score++;  
        printf("correct\n\n");}  
else{  
    printf("you choose wrong option\n\n");  
}  

printf("Q3. The gas plants use for photosynthesis?\n");  
printf("A. Oxygen\nB. Carbon Dioxide\nC. Nitrogen\nD. Hydrogen\nYour answer: ");  
time(&now);  
if (difftime(now, start) > 40) goto endScience;  
scanf(" %c", &ans);  
if (ans == 'B' || ans == 'b') {  
    score++;  
        printf("correct\n\n");}  
else{  
    printf("you choose wrong option\n\n");  
}  

printf("Q4. Human body has how many bones?\n");  
printf("A. 200\nB. 208\nC. 206\nD. 210\nYour answer: ");  
time(&now);  
if (difftime(now, start) > 40) goto endScience;  
scanf(" %c", &ans);  
if (ans == 'C' || ans == 'c') {  
    score++;  
        printf("correct\n\n");}  
else{  
    printf("you choose wrong option\n\n");  
}  
printf("Q5. Which part of the plant conducts photosynthesis?\n");  
printf("A. Root\nB. Stem\nC. Leaf\nD. Flower\nYour answer: ");  
time(&now);  
if (difftime(now, start) > 40) goto endScience;  
scanf(" %c", &ans);  
if (ans == 'C' || ans == 'c') {  
    score++;  
        printf("correct\n\n");}  
else{  
    printf("you choose wrong option\n\n");  
}

endScience:
printf("\nTime's up or test completed!\n");
printf("Your Science Score: %d/5\n", score);
if(score<=2){
printf("pass/fail : fail\n");
printf("YOU HAVE TO FOCUS ON STUDY NOW \n");
}else{
printf("pass/fail : pass\n");
printf("CONGRATS!,good job brother\n");
}
}

void gkTest() {
int score = 0;
char ans;
time_t start, now;

printf("\n.................. General Knowledge Test ...................\n");  
time(&start);  

printf("Q1. Who is the Prime Minister of India (2024)?\n");  
printf("A. Modi\nB. Rahul\nC. Yogi\nD. Kejriwal\nYour answer: ");  
time(&now);  
if (difftime(now, start) > 40) goto endGK;  
scanf(" %c", &ans);  
if (ans == 'A' || ans == 'a') {  
    score++;  
        printf("correct\n\n");}  
else{  
    printf("you choose wrong option\n\n");  
}  

printf("Q2. Capital of Maharashtra?\n");  
printf("A. Pune\nB. Mumbai\nC. Nagpur\nD. Nashik\nYour answer: ");  
time(&now);  
if (difftime(now, start) > 40) goto endGK;  
scanf(" %c", &ans);  
if (ans == 'B' || ans == 'b') {  
    score++;  
        printf("correct\n\n");}  
else{  
    printf("you choose wrong option\n\n");  
}  

printf("Q3. National animal of India?\n");  
printf("A. Lion\nB. Elephant\nC. Tiger\nD. Bear\nYour answer: ");  
time(&now);  
if (difftime(now, start) > 40) goto endGK;  
scanf(" %c", &ans);  
if (ans == 'C' || ans == 'c') {  
    score++;  
        printf("correct\n\n");}  
else{  
    printf("you choose wrong option\n\n");  
}  

printf("Q4. Currency of India?\n");  
printf("A. Dollar\nB. Peso\nC. Rupee\nD. Pound\nYour answer: ");  
time(&now);  
if (difftime(now, start) > 40) goto endGK;  
scanf(" %c", &ans);  
if (ans == 'C' || ans == 'c') {  
    score++;  
        printf("correct\n\n");}  
else{  
    printf("you choose wrong option\n\n");  
}  

printf("Q5. How many continents are there?\n");  
printf("A. 5\nB. 6\nC. 7\nD. 8\nYour answer: ");  
time(&now);  
if (difftime(now, start) > 40) goto endGK;  
scanf(" %c", &ans);  
if (ans == 'C' || ans == 'c') {  
    score++;  
        printf("correct\n\n");}  
else{  
    printf("you choose wrong option\n\n");  
}

endGK:
printf("\nTime's up or test completed!\n");
printf("Your General Knowledge Score: %d/5\n", score);
if(score<=2){
printf("pass/fail : fail\n");
printf("YOU HAVE TO FOCUS ON STUDY NOW\n ");
}else{
printf("pass/fail : pass\n");
printf("CONGRATS!,good job brothe\n");
}
}

int main() {
struct User students[3] = {
{"roshan", "1234"},
{"ganesh", "1234"},
{"sarthak", "1234"}
};

struct User teacher = {"teacher", "crusher"};  

char enteredUsername[20], enteredPassword[20];  
int choice, loginSuccess = 0, test;  
printf("\n");  
printf("***************** INSTRUCTIONS ********************\n\n");  
printf("this  test is only for practising online exam \n");  
printf("1.You can  give only one exam.\n");  
printf("2.Electronics devices are not allowed.\n");  
printf("3.Only 40 second for exam.\n");  
printf("4.Clothes should be decent.\n");  
printf("5.You have only one chance to choose a option in exam \n");  
  
printf("6.Teacher have only acess to see answer and there correct option.\n");  
printf("7.Teachers can not accessed to change the question or answer.\n");  
printf("8.Atleast 3 marks will be required for passed the exam\n\n");  

printf("................... Login System ..................\n\n");  
printf("1. Student Login\n");  
printf("2. Teacher Login\n");  
printf("Enter your choice: ");  
scanf("%d", &choice);  

printf("\nEnter Username: ");  
scanf("%s", enteredUsername);  
printf("Enter Password: ");  
scanf("%s", enteredPassword);  

if (choice == 1) {  
    for (int i = 0; i < 3; i++) {  
        if (strcmp(enteredUsername, students[i].username) == 0 &&  
            strcmp(enteredPassword, students[i].password) == 0) {  
            loginSuccess = 1;  
            break;  
        }  
    }  

    if (loginSuccess) {  
        printf("Student login successful!\n\n\n");  
          
        printf("Which subject test do you want to give?\n 1. Math\n 2. Science\n 3. General Knowledge\nYour choice: ");  
        scanf("%d", &test);  
        printf("\n");  

        if (test == 1) {  
            mathTest();  
        } else if (test == 2) {  
            scienceTest();  
        } else if (test == 3) {  
            gkTest();  
        } else {  
            printf("Invalid subject choice.\n");  
        }  

    } else {  
        printf("Invalid student choice .\n");  
    }  

} else if (choice == 2) {  
    if (strcmp(enteredUsername, teacher.username) == 0 &&  
        strcmp(enteredPassword, teacher.password) == 0) {  
        printf("Teacher login successful!\n\n");  
        printf (".............MATH TEST...............\n");

printf("Q.1. What is 5 + 3 ?\n");
printf("A. 6\nB. 7\nC. 8\nD. 9\n");
printf("Correct Option : C\n");
printf("\n");
printf("Q.2. What is 12 * 2 ?\n");
printf("A. 24\nB. 22\nC. 20\nD. 26\n");
printf("Correct Option:A");
printf("\n");

printf("Q.3. What is the square root of 16 ?\n");
printf("A. 5\nB. 4\nC. 3\nD. 6\n");
printf("Correct Option:B");
printf("\n");

printf("Q.4. What is 45 / 5?");
printf("A. 9\nB. 10\nC. 8\nD. 7\n");
printf("Correct Option:A");
printf("\n");

printf("Q.5. What is 7 squared?\n");
printf ("A. 49\nB. 42\nC. 56\nD. 36\n");
printf("Correct Option:A");
printf("\n\n");
printf(".............SCIENCE TEST...............\n");

printf("Q.1. What planet is known as the Red Planet?\n");  
printf("A. Earth\nB. Mars\nC. Venus\nD. Jupiter\n");  
printf("Correct Option: B\n\n");  

printf("Q.2. What gas do plants absorb from the atmosphere?\n");  
printf("A. Oxygen\nB. Nitrogen\nC. Carbon Dioxide\nD. Hydrogen\n");  
printf("Correct Option: C\n\n");  

printf("Q.3. What is the boiling point of water?\n");  
printf("A. 90°C\nB. 100°C\nC. 80°C\nD. 120°C\n");  
printf("Correct Option: B\n\n");  

printf("Q.4. What part of the plant conducts photosynthesis?\n");  
printf("A. Root\nB. Stem\nC. Leaf\nD. Flower\n");  
printf("Correct Option: C\n\n");  

printf("Q.5. What force pulls objects toward the Earth?\n");  
printf("A. Magnetism\nB. Gravity\nC. Friction\nD. Electricity\n");  
printf("Correct Option: B\n\n");  




printf(".............GENERAL KNOWLEDGE TEST...............\n");  

printf("Q.1. Who is the Prime Minister of India (2024)?\n");  
printf("A. Rahul Gandhi\nB. Arvind Kejriwal\nC. Narendra Modi\nD. Amit Shah\n");  
printf("Correct Option: C\n\n");  

printf("Q.2. What is the capital of Maharashtra?\n");  
printf("A. Pune\nB. Nagpur\nC. Mumbai\nD. Nashik\n");  
printf("Correct Option: C\n\n");  

printf("Q.3. Which is the national bird of India?\n");  
printf("A. Sparrow\nB. Parrot\nC. Peacock\nD. Eagle\n");  
printf("Correct Option: C\n\n");  

printf("Q.4. How many players are there in a cricket team?\n");  
printf("A. 10\nB. 12\nC. 11\nD. 9\n");  
printf("Correct Option: C\n\n");  

printf("Q.5. Which river is the longest in India?\n");  
printf("A. Ganga\nB. Yamuna\nC. Godavari\nD. Narmada\n");  
printf("Correct Option: A\n\n");  


    } else {  
        printf("Invalid username and password sorry .\n");  
    }  

} else {  
    printf("Invalid choice.\n");  
}  

return 0;

}

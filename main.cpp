/*************************************************************************************
Program............:MathTutorV2
Programmer........ : Joeseph Paul Bracht, Saw Barnabas Thadoe Htoo
Date................: 9/28/2026
Course Section......:12:00 pm
GitHub Repo.............: https://github.com/BarnabasHtoo/MathTutorV2.git
Description.............. A math game designed for children to learn basic addition.
                          The program will ask the user to input their name and then
                          present them with a simple addition problem, accepts an answer,
                          and displays a program ending message.
*****************************************************************************************/
#include <iostream> // Where the cout's and cin's come from
#include <string> // Where the string functions come from
#include <ctime> // Where the time functions come from
#include <cstdlib> // Where the random number functions come from
using namespace std;

int main() {
    string userName = "unknown";
    int answer = 0; // user answer; stores their input
    char userSex = '?'; // user sex, M or F
    int leftNumb = 0; // random number from 1-10 on the left side of equation
    int rightNumb = 0; // random number from 1-10 on the right side of equation
    int answerI = 0; // where the correct answer for the later equation is stored
    int userAge = 0; // user age; has various different phrases later depending on the age range the user inputs
    int mathType = 0; // stores the number that chooses between addition, subtraction, multiplication, and division
    char mathSymbol = '?'; // +, -, *, and / are the characters that could be randomly selected
    int temp = 0; // Temporary Variable, used to ensure the left number is greater than the right number

    srand(time(0)); // Sets the random number below

    leftNumb = rand() % 10 + 1; // random number from 1-10 on the left side of equation
    rightNumb = rand() % 10 + 1; // random number from 1-10 on the right side of equation
    mathType = rand() % 4 + 1; // handles the numbers that choose the kind of operation like addition

    cout << " __  __       _   _       _____      _ " << endl;
    cout << "|  \\/  | __ _| |_| |__   |_   _|   _| |_ ___  _ __ " << endl;
    cout << "| |\\/| |/ _` | __| '_ \\    | || | | | __/ _ \\| '__|" << endl;
    cout << "| |  | | (_| | |_| | | |   | || |_| | || (_) | |   " << endl;
    cout << "|_|  |_|\\__,_|\\__|_| |_|   |_| \\__,_|\\__\\___/|_|   " << endl;

    cout << "_________________________________________________" << endl;
    cout << "Welcome to the Silly Simply Math Tutor V2!" << endl;
    cout << "_________________________________________________" << endl;

    cout << "Please enter your sex! Type M or F: ";
    cin >> userSex;

    if (userSex == 'M') {
        cout << "Identify yourself, Mister: ";
        getline(cin, userName); //only to clear the input buffer
        getline(cin, userName);

        cout << "Welcome Mister " << userName << "!" << endl;
    } else {
        cout << "Identify yourself, Miss: ";
        getline(cin, userName); //only to clear the input buffer
        getline(cin, userName);

        cout << "Welcome Miss " << userName << "!" << endl;
    }
    cout << R"(
Here is the fun facts before we continue!!
- Numbers can be Funny
- Did you know Math is everywhere around you, even in jokes and games
- An equation a day keeps the brain fog away!
- The number zero was one of the most important inventions in mathematics.
- A multiplication table can reveal many interesting number patterns. )" << endl;

    cout << "________________________________________________________________" << endl;
    cout << "Before we go on, can you please enter your age: ";
    cin >> userAge;

    if (userAge >= 21) { // varying responses mentioned above for userAge variable
        cout << "You are an adult now. Please be responsible of yourself." << endl;
    } else if (userAge < 18) {
        cout << "You can enjoy your early years." << endl;
    } else {
        cout << "You are living in the best part of your life. Make good choice!" << endl;
    }

    switch (mathType)
    {
        case 1: // A 1 in the random number generator means the equation is an addition equation
            mathSymbol = '+';
            answerI = leftNumb + rightNumb;
            break;

        case 2: // A 2 in the random number generator means the equation is a subtraction equation
            if (leftNumb < rightNumb)
            {
                temp = leftNumb;
                leftNumb = rightNumb;
                rightNumb = temp;
            }

            mathSymbol = '-';
            answerI = leftNumb - rightNumb;
            break;

        case 3: // A 3 in the random number generator will make the equation a multiplication equation
            mathSymbol = '*';
            answerI = leftNumb * rightNumb;
            break;

        case 4: // A 4 in the random number generator will make equation a division equation.
            answerI = leftNumb;
            leftNumb *= rightNumb; // *= is a compounded operator; Note 4 Joe
            mathSymbol = '/';
            break;

        default: // Default program, shouldn't run unless major mess up occurs in the number generation
            cout << "Error: Invalid math type generated!" << endl;
            cout << "Program ended with an error -1" << endl;
            cout << "Please report this error to Barnabas or Joe!" << endl;

            return -1;
    }

    cout << leftNumb << " " << mathSymbol << " " // This displays the equation once all the numbers have been generated
    << rightNumb << " = ?" << endl;

    cout << "Your answer: "; // User's answer goes here
    cin >> answer;

    cout << endl;

    if (answer == answerI) // The if outputs different phrases depending on if the user got it right
    {
        cout << "========================================" << endl;
        cout << "Congratulations, " << userName << "!" << endl;
        cout << "Your answer is CORRECT!" << endl;
        cout << "Great job on your math skills!" << endl;
        cout << "========================================" << endl;
    }
    else // This outputs if the user gets the answer wrong
    {
        cout << "========================================" << endl;
        cout << "Good try, " << userName << "!" << endl;
        cout << "Your answer is incorrect." << endl;
        cout << "The correct answer is: "
        << answerI << endl;
        cout << "Keep practicing. You can do it!" << endl;
        cout << "========================================" << endl;
    }

    cout << endl;
    cout << "Thank you for using Math Tutor V2!" << endl;
    cout << "Have a wonderful day, " << userName << "!" << endl;

    cout << R"(
 ____ _                 _
|_  _| |__   __ _ _ __ | | __  _   _  ___  _   _
 | | | '_ \ / _` | '_ \| |/ / | | | |/ _ \| | | |
 | | | | | | (_| | | | |   <  | |_| | (_) | |_| |
 |_| |_| |_|\__,_|_| |_|_|\_\  \__, |\___/ \__,_|
                               |___/             )" << endl;
    return 0;
}
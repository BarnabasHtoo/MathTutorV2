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
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    string userName = "unknown";
    string statement_i;
    int answer = 0;
    char userSex = '?';
    int leftNumb = 0;
    int rightNumb = 0;
    int answerI = 0;
    int userAge = 0;
    int mathType = 0;
    char mathSymbol = '?';
    int temp = 0;

    srand(time(NULL));

    leftNumb = rand() % 10 + 1;
    rightNumb = rand() % 10 + 1;
    mathType = rand() % 4 + 1;

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
- An equation a day keeps the brain fog away! )" << endl;
    cout << "________________________________________________________________" << endl;
    cout << "Before we go on, can you please enter your age: ";
    cin >> userAge;

    if (userAge >= 21) {
        cout << "You are an adult now. Please be responsible of yourself." << endl;
    } else if (userAge < 18) {
        cout << "You can enjoy your early years." << endl;
    } else {
        cout << "You are living in the best part of your life. Make good choice!" << endl;
    }

    switch (mathType)
    {
        case 1:
            mathSymbol = '+';
            answerI = leftNumb + rightNumb;
            break;

        case 2:
            if (leftNumb < rightNumb)
            {
                temp = leftNumb;
                leftNumb = rightNumb;
                rightNumb = temp;
            }

            mathSymbol = '-';
            answerI = leftNumb - rightNumb;
            break;

        case 3:
            // Multiplication
            mathSymbol = '*';
            answerI = leftNumb * rightNumb;
            break;

        case 4:
            answerI = leftNumb;
            leftNumb *= rightNumb;
            mathSymbol = '/';
            break;

        default:
            cout << "Error: Invalid math type generated!" << endl;
            cout << "Math type must be between 1 and 4." << endl;

            return 0;
    }

    cout << leftNumb << " " << mathSymbol << " "
    << rightNumb << " = ?" << endl;

    cout << "Your answer: ";
    cin >> answer;

    cout << endl;

    if (answer == answerI)
    {
        cout << "========================================" << endl;
        cout << "Congratulations, " << userName << "!" << endl;
        cout << "Your answer is CORRECT!" << endl;
        cout << "Great job on your math skills!" << endl;
        cout << "========================================" << endl;
    }
    else
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
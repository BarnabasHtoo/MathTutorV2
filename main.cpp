/*************************************************************************************
Program............:MathTutorV1
Programmer........ : Md Mahbubur Rahman Siam, Saw Barnabas Thadoe Htoo
Date................: 2026.09.09
GitHub Repo.............: https://github.com/NETtlSimrox/MathTutorV1.git
Description.............. A math game designed for children to learn basic addition.
                          The program will ask the user to input their name and then
                          present them with a simple addition problem, accepts an answer,
                          and displays a program ending message.
*****************************************************************************************/
#include <iostream>
using namespace std;

int main() {
    string userName = "unknown";
    string statement_i;
    int firstNum = 2;
    int secondNum = 3;
    int userAns;
    int answer = 5;


    cout << " __  __       _   _       _____      _ " << endl;
    cout << "|  \\/  | __ _| |_| |__   |_   _|   _| |_ ___  _ __ " << endl;
    cout << "| |\\/| |/ _` | __| '_ \\    | || | | | __/ _ \\| '__|"<< endl;
    cout << "| |  | | (_| | |_| | | |   | || |_| | || (_) | |   " << endl;
    cout << "|_|  |_|\\__,_|\\__|_| |_|   |_| \\__,_|\\__\\___/|_|   " << endl;

    cout << "_________________________________________________" << endl;
    cout << "Welcome to the Silly Simply Math Tutor V1!" << endl ;
    cout << "_________________________________________________" << endl;

    cout << "Identify yourself ,Sir: ";
    cin >> userName;
    cout << "Welcome " << userName << "!" << endl;

    cout << "Are you ready to guess the answer?" << endl;
    cin >> statement_i;

    cout << "Here we go!" << endl;
    cout << firstNum << " + " << secondNum << " = " << "?" << endl;
    cout << "Please type the answer below!" << endl;
    cin >> answer;

    cout << "We will tell you the correct answer on our MathTutor Vers. II" << endl;
    cout << "Stay Tuned!" << endl;
    cout << R"(
 ____ _                 _
|_  _| |__   __ _ _ __ | | __  _   _  ___  _   _
 | | | '_ \ / _` | '_ \| |/ / | | | |/ _ \| | | |
 | | | | | | (_| | | | |   <  | |_| | (_) | |_| |
 |_| |_| |_|\__,_|_| |_|_|\_\  \__, |\___/ \__,_|
                               |___/             )" << endl;
    return 0;
}

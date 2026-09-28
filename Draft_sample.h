#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    string userName = "";
    int leftNumber = 0;
    int rightNumber = 0;
    int mathType = 0;
    char mathSymbol = '?';
    int correctAnswer = 0;
    int userAnswer = 0;
    int temp = 0;

    srand(static_cast<unsigned int>(time(0)));

    cout << "========================================" << endl;
    cout << "       WELCOME TO MATH TUTOR V2" << endl;
    cout << "========================================" << endl;
    cout << "Practice your math skills with a random" << endl;
    cout << "math question. Good luck!" << endl;
    cout << endl;

    cout << "Please enter your full name: ";
    getline(cin, userName);

    cout << endl;
    cout << "Hello, " << userName << "!" << endl;
    cout << "Here is your math question:" << endl;
    cout << endl;

    leftNumber = rand() % 10 + 1;
    rightNumber = rand() % 10 + 1;

    mathType = rand() % 4 + 1;

    switch (mathType)
    {
        case 1:
            mathSymbol = '+';
            correctAnswer = leftNumber + rightNumber;
            break;

        case 2:
            if (leftNumber < rightNumber)
            {
                temp = leftNumber;
                leftNumber = rightNumber;
                rightNumber = temp;
            }

            mathSymbol = '-';
            correctAnswer = leftNumber - rightNumber;
            break;

        case 3:
            // Multiplication
            mathSymbol = '*';
            correctAnswer = leftNumber * rightNumber;
            break;

        case 4:
            correctAnswer = leftNumber;
            leftNumber *= rightNumber;
            mathSymbol = '/';
            break;

        default:
            cout << "Error: Invalid math type generated!" << endl;
            cout << "Math type must be between 1 and 4." << endl;

            return 0;
    }

    cout << leftNumber << " " << mathSymbol << " "
         << rightNumber << " = ?" << endl;

    cout << "Your answer: ";
    cin >> userAnswer;

    cout << endl;

    if (userAnswer == correctAnswer)
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
             << correctAnswer << endl;
        cout << "Keep practicing. You can do it!" << endl;
        cout << "========================================" << endl;
    }

    cout << endl;
    cout << "Thank you for using Math Tutor V2!" << endl;
    cout << "Have a wonderful day, " << userName << "!" << endl;

    return 0;
}
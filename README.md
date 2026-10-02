# Math Tutor V2

A fun and interactive C++ math practice program designed to help children 
develop basic arithmetic skills through randomly generated math problems.

<b>Table of Content</b>
- [Summary](#summary)
- [Fun Math Facts](#Fun-Math-Facts)
- [Features](Features)
- [Maintainers](#maintainers)
- [New Concepts Used](#new-concepts-used)
- [Console Output Example](#console-output-example)

## Summary
Math Tutor V2 is an educational C++ program that presents users with a random math problem 
and checks their answer. The program interacts with users by asking for personal information, 
sharing fun math facts, and providing encouraging feedback based on performance.

## Fun Math Facts

- Numbers can be Funny.
- Did you know Math is everywhere around you, even in jokes and games.
- An equation a day keeps the brain fog away!
- The number zero was one of the most important inventions in mathematics.
- A multiplication table can reveal many interesting number patterns.

## Features

- Displays a custom ASCII art program title
- Asks the user for their sex and name
- Displays personalized greetings
- Shares fun math facts
- Requests the user's age and provides specific messages
- Generates random numbers
- Generates one of four math operations
- Prevents negative results in subtraction problems
- Prevents decimal answers in division problems
- Validates user answers
- Displays encouraging feedback
- Shows the correct answer when needed
- Includes an error handling case for invalid math types
- Ends with a personalized goodbye message

## Maintainers
[@JoeBracht](https://github.com/JoeBracht) Joe Bracht  
[@BarnabasHtoo](https://github.com/BarnabasHtoo) Saw Barnabas Thadoe Htoo


## New Concepts Used
- Proper documentation
- Proper code indentation
- Random number generation
- Seeding the random number generator using srand()
- Variable declaration and initialization
- Using getline() for full-name input
- Switch statements
- Arithmetic operators
- Conditional statements (if, else if, else)

## Console Output Testing Example

### 1. Correct Answer
````
 __  __       _   _       _____      _ 
|  \/  | __ _| |_| |__   |_   _|   _| |_ ___  _ __ 
| |\/| |/ _` | __| '_ \    | || | | | __/ _ \| '__|
| |  | | (_| | |_| | | |   | || |_| | || (_) | |   
|_|  |_|\__,_|\__|_| |_|   |_| \__,_|\__\___/|_|   
_________________________________________________
Welcome to the Silly Simply Math Tutor V2!
_________________________________________________
Please enter your sex! Type M or F: F
Identify yourself, Miss: Diana Hope
Welcome Miss Diana Hope!

Here is the fun facts before we continue!!
- Numbers can be Funny
- Did you know Math is everywhere around you, even in jokes and games
- An equation a day keeps the brain fog away!
- The number zero was one of the most important inventions in mathematics.
- A multiplication table can reveal many interesting number patterns. 
________________________________________________________________
Before we go on, can you please enter your age: 15
You can enjoy your early years.
18 / 3 = ?
Your answer: 6

========================================
Congratulations, Diana Hope!
Your answer is CORRECT!
Great job on your math skills!
========================================

Thank you for using Math Tutor V2!
Have a wonderful day, Diana Hope!

 ____ _                 _
|_  _| |__   __ _ _ __ | | __  _   _  ___  _   _
 | | | '_ \ / _` | '_ \| |/ / | | | |/ _ \| | | |
 | | | | | | (_| | | | |   <  | |_| | (_) | |_| |
 |_| |_| |_|\__,_|_| |_|_|\_\  \__, |\___/ \__,_|
                               |___/             

````
### 2. Incorrect Answer
````
 __  __       _   _       _____      _ 
|  \/  | __ _| |_| |__   |_   _|   _| |_ ___  _ __ 
| |\/| |/ _` | __| '_ \    | || | | | __/ _ \| '__|
| |  | | (_| | |_| | | |   | || |_| | || (_) | |   
|_|  |_|\__,_|\__|_| |_|   |_| \__,_|\__\___/|_|   
_________________________________________________
Welcome to the Silly Simply Math Tutor V2!
_________________________________________________
Please enter your sex! Type M or F: M
Identify yourself, Mister: Joseph Klein
Welcome Mister Joseph Klein!

Here is the fun facts before we continue!!
- Numbers can be Funny
- Did you know Math is everywhere around you, even in jokes and games
- An equation a day keeps the brain fog away!
- The number zero was one of the most important inventions in mathematics.
- A multiplication table can reveal many interesting number patterns. 
________________________________________________________________
Before we go on, can you please enter your age: 20
You are living in the best part of your life. Make good choice!
3 + 7 = ?
Your answer: 18

========================================
Good try, Joseph Klein!
Your answer is incorrect.
The correct answer is: 10
Keep practicing. You can do it!
========================================

Thank you for using Math Tutor V2!
Have a wonderful day, Joseph Klein!

 ____ _                 _
|_  _| |__   __ _ _ __ | | __  _   _  ___  _   _
 | | | '_ \ / _` | '_ \| |/ / | | | |/ _ \| | | |
 | | | | | | (_| | | | |   <  | |_| | (_) | |_| |
 |_| |_| |_|\__,_|_| |_|_|\_\  \__, |\___/ \__,_|
                               |___/             

````

### 3. Invalid Math Type


```
 __  __       _   _       _____      _ 
|  \/  | __ _| |_| |__   |_   _|   _| |_ ___  _ __ 
| |\/| |/ _` | __| '_ \    | || | | | __/ _ \| '__|
| |  | | (_| | |_| | | |   | || |_| | || (_) | |   
|_|  |_|\__,_|\__|_| |_|   |_| \__,_|\__\___/|_|   
_________________________________________________
Welcome to the Silly Simply Math Tutor V2!
_________________________________________________
Please enter your sex! Type M or F: M
Identify yourself, Mister: David Jake
Welcome Mister David Jake!

Here is the fun facts before we continue!!
- Numbers can be Funny
- Did you know Math is everywhere around you, even in jokes and games
- An equation a day keeps the brain fog away!
- The number zero was one of the most important inventions in mathematics.
- A multiplication table can reveal many interesting number patterns. 
________________________________________________________________
Before we go on, can you please enter your age: 25
You are an adult now. Please be responsible of yourself.
Error: Invalid math type generated!
Program ended with an error -1
Please report this error to Barnabas or Joe!

Process finished with exit code -1


```

[Back to Top](#math-tutor-v2)

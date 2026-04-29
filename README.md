# cpp-Project
C++ console-based quiz application that reads MCQ questions from a file, evaluates user responses, and displays score, percentage, and grade.
# Quiz Generator from File (C++)

## Description

This project is a console-based Quiz Generator developed in C++. It reads multiple-choice questions from a text file and presents them to the user in the terminal. The program evaluates user responses, calculates the final score, percentage, and assigns a grade based on performance.

The project demonstrates fundamental C++ concepts such as file handling, string manipulation, conditional logic, and user input validation.

## Features

* Reads quiz data from an external file (`quiz.txt`)
* Supports multiple-choice questions (MCQs)
* Validates user input (A/B/C/D)
* Case-insensitive answer handling
* Displays score and percentage
* Provides Pass/Fail result
* Assigns grade (A, B, C, D)

## File Structure

```
project_folder/
│
├── cppProject.cpp
├── quiz.txt
└── README.md
```

## Input File Format (`quiz.txt`)

Each question must follow this structure:

```
Question
A. Option 1
B. Option 2
C. Option 3
D. Option 4
Correct Option (A/B/C/D)
```

### Example:

```
What is 2+2?
A. 3
B. 4
C. 5
D. 6
B
```

## How to Compile and Run

### Step 1: Compile

```
g++ cppProject.cpp -o cppProject
```

### Step 2: Run

```
./cppProject.exe
```

## Output

The program displays each question with options, accepts user input, and provides immediate feedback. At the end of the quiz, it shows:

* Total Score
* Percentage
* Pass/Fail Result
* Grade

## Grading Criteria

* 80% and above: Grade A
* 60% to 79%: Grade B
* 40% to 59%: Grade C
* Below 40%: Grade D

## Requirements

* C++ compiler (e.g., g++)
* Basic terminal or command prompt

## Future Improvements

* Randomized question order
* Timer-based quiz system
* Persistent score storage
* Graphical user interface (GUI)

## Author

Developed as a C++ mini-project for academic purposes.

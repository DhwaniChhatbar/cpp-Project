#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    ifstream file("quiz.txt");

    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    string question, optA, optB, optC, optD;
    string correct, user;
    int score = 0, total = 0;

    cout << "===== QUIZ GENERATOR =====" << endl;

    while (getline(file, question)) {
        getline(file, optA);
        getline(file, optB);
        getline(file, optC);
        getline(file, optD);
        getline(file, correct);

        cout << "\nQ" << total + 1 << ": " << question << endl;
        cout << optA << endl;
        cout << optB << endl;
        cout << optC << endl;
        cout << optD << endl;

        cout << "Your Answer (A/B/C/D): ";
        getline(cin, user);

        if (!user.empty()) {
            user[0] = toupper(user[0]);
            user = user.substr(0, 1);
        }

        while (user != "A" && user != "B" && user != "C" && user != "D") {
            cout << "Invalid input! Enter A/B/C/D: ";
            getline(cin, user);
            if (!user.empty()) {
                user[0] = toupper(user[0]);
                user = user.substr(0, 1);
            }
        }

        if (user == correct) {
            cout << "Correct!" << endl;
            score++;
        } else {
            cout << "Wrong! Correct answer is: " << correct << endl;
        }

        total++;
    }

    double percent = (double)score / total * 100;

    cout << "\n===== QUIZ FINISHED =====" << endl;
    cout << "Score: " << score << "/" << total << endl;
    cout << "Percentage: " << percent << "%" << endl;

    if (percent >= 50)
        cout << "Result: Pass" << endl;
    else
        cout << "Result: Fail" << endl;

    // Grade system
    if (percent >= 80)
        cout << "Grade: A" << endl;
    else if (percent >= 60)
        cout << "Grade: B" << endl;
    else if (percent >= 40)
        cout << "Grade: C" << endl;
    else
        cout << "Grade: D" << endl;

    file.close();
    return 0;
}
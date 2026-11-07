#include <iostream>
using namespace std;

// Function Prototypes (Covering all 4 types of functions)
void displayHeader();                  // Type 4: No parameters, no return value (void)
double getScore();                     // Type 1: No parameters, returns a value
bool isValidScore(double score);       // Type 2: With parameters, returns a value
char determineGrade(double avg);       // Type 2: With parameters, returns a value
void displayResults(double avg, char grade); // Type 3: With parameters, no return value (void)

int main() {
    double total = 0;
    double score;
    int count = 0;

    // Call Type 4 function
    displayHeader();

    // Loop to collect 5 valid scores
    while (count < 5) {
        // Call Type 1 function to get score from user
        score = getScore();

        // Call Type 2 function to validate score
        if (isValidScore(score)) {
            total += score;
            count++;
        }
        else {
            cout << "!!! INVALID SCORE\n";
        }
    }

    // Calculate average
    double average = total / 5.0;

    // Call Type 2 function to get the grade
    char grade = determineGrade(average);

    // Call Type 3 function to display final results
    displayResults(average, grade);

    return 0;
}

// Function Definitions

// 1. No parameters, no return value
void displayHeader() {
    cout << "Find Average for 5 Scores\n";
}

// 2. No parameters, returns a double
double getScore() {
    double s;
    cout << "Enter score: ";
    cin >> s;
    return s;
}

// 3. With parameters, returns a bool (validation)
bool isValidScore(double score) {
    if (score >= 0 && score <= 100)
        return true;
    else
        return false;
}

// 4. With parameters, returns a char (grading logic based on Table 1)
char determineGrade(double avg) {
    if (avg >= 80 && avg <= 100)
        return 'A';
    else if (avg >= 65 && avg <= 79)
        return 'B';
    else if (avg >= 50 && avg <= 64)
        return 'C';
    else if (avg >= 40 && avg <= 49)
        return 'D';
    else
        return 'F';
}

// 5. With parameters, no return value (displays output)
void displayResults(double avg, char grade) {
    cout << "The average score is " << avg << endl;
    cout << "The average grade is " << grade << endl;
}
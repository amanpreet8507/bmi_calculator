//
//  main.cpp
//  Body Mass Index Calculator
//
//  Created by Amanpreeet Sandhu on 2024-09-19.
//

#include <iostream>

using namespace std;
using std::endl;

int main() {
    
    cout << "Enter your weight in pounds: ";
    
    // Declaration of variables
    int weightInPounds;
    int heightInInches;
    int bmi;
    
    cin >> weightInPounds ; // Read user input
    cout << endl  << "Enter your height in inches: ";
    cin >> heightInInches; // Read user input
    bmi = (weightInPounds * 703) / (heightInInches * heightInInches);
    cout << endl << "BMI VALUES " << endl;
    
    // Output the BMI results as per user's BMI
    if (bmi < 18.5) {
        cout << "Underweight: less than 18.5" << endl << endl;
    } else if (bmi >= 18.5 && bmi <= 24.9){
        cout << "Normal : between 18.5 and 24.9" << endl << endl;
    } else if (bmi >= 25 && bmi <= 29.9){
        cout << "Overweight : between 25 and 29.9" << endl << endl;
    } else{
        cout << "Obese: 30 or greater" << endl << endl;
    }
}

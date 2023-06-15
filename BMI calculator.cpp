#include <iostream>

using namespace std;

double calculateBMI(double weight, double height) {
    // Convert height from centimeters to meters
    height = height / 100.0;

    // Calculate BMI using the formula: weight / (height * height)
    double bmi = weight / (height * height);

    return bmi;
}

void interpretBMI(double bmi) {
    cout << "BMI: " << bmi << endl;

    if (bmi < 18.5) {
        cout << "Underweight" << endl;
    } else if (bmi < 25) {
        cout << "Normal weight" << endl;
    } else if (bmi < 30) {
        cout << "Overweight" << endl;
    } else {
        cout << "Obese" << endl;
    }
}

int main() {
    double weight, height;

    cout << "BMI Calculator" << endl;
    cout << "Enter weight (in kilograms): ";
    cin >> weight;

    cout << "Enter height (in centimeters): ";
    cin >> height;

    double bmi = calculateBMI(weight, height);
    interpretBMI(bmi);

    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

class Calculator {
public:
    double add(double a, double b) { return a + b; }
    double subtract(double a, double b) { return a - b; }
    double multiply(double a, double b) { return a * b; }
    double divide(double a, double b) { return (b != 0) ? a / b : 0; }
    
    long long factorial(int n) {
        return (n <= 1) ? 1 : n * factorial(n - 1);
    }

    double exponentiation(double base, double exp) { return pow(base, exp); }
    double square_root(double num) { return sqrt(num); }
    double cube_root(double num) { return cbrt(num); }
    double decimal_to_percentage(double num) { return num * 100; }
    double percentage_to_decimal(double num) { return num / 100; }
    double cgpa_10_to_4(double cgpa) { return (cgpa / 10) * 4; }
    double cgpa_4_to_10(double cgpa) { return (cgpa / 4) * 10; }
};

int main() {
    Calculator calc;
    int choice;
    double num1, num2;
    
    do {
        cout << "\n===== Calculator Menu =====\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Factorial\n";
        cout << "6. Exponentiation\n";
        cout << "7. Square Root\n";
        cout << "8. Cube Root\n";
        cout << "9. Decimal to Percentage\n";
        cout << "10. Percentage to Decimal\n";
        cout << "11. Convert 10-Point CGPA to 4-Point CGPA\n";
        cout << "12. Convert 4-Point CGPA to 10-Point CGPA\n";
        cout << "13. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << calc.add(num1, num2) << endl;
                break;
            case 2:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << calc.subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << calc.multiply(num1, num2) << endl;
                break;
            case 4:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                if (num2 == 0)
                    cout << "Error: Division by zero is not allowed." << endl;
                else
                    cout << "Result: " << calc.divide(num1, num2) << endl;
                break;
            case 5:
                int n;
                cout << "Enter an integer: ";
                cin >> n;
                if (n < 0)
                    cout << "Error: Factorial of negative numbers is not defined." << endl;
                else
                    cout << "Result: " << calc.factorial(n) << endl;
                break;
            case 6:
                cout << "Enter base and exponent: ";
                cin >> num1 >> num2;
                cout << "Result: " << calc.exponentiation(num1, num2) << endl;
                break;
            case 7:
                cout << "Enter a number: ";
                cin >> num1;
                if (num1 < 0)
                    cout << "Error: Square root of negative numbers is not defined." << endl;
                else
                    cout << "Result: " << calc.square_root(num1) << endl;
                break;
            case 8:
                cout << "Enter a number: ";
                cin >> num1;
                cout << "Result: " << calc.cube_root(num1) << endl;
                break;
            case 9:
                cout << "Enter a decimal number: ";
                cin >> num1;
                cout << "Result: " << calc.decimal_to_percentage(num1) << "%" << endl;
                break;
            case 10:
                cout << "Enter a percentage: ";
                cin >> num1;
                cout << "Result: " << calc.percentage_to_decimal(num1) << endl;
                break;
            case 11:
                cout << "Enter CGPA (10-point scale): ";
                cin >> num1;
                cout << "Result: " << calc.cgpa_10_to_4(num1) << " (4-point scale)" << endl;
                break;
            case 12:
                cout << "Enter CGPA (4-point scale): ";
                cin >> num1;
                cout << "Result: " << calc.cgpa_4_to_10(num1) << " (10-point scale)" << endl;
                break;
            case 13:
                cout << "Exiting Calculator. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 13);

    return 0;
}


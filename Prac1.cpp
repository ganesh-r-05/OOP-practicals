#include <iostream>
using namespace std;

class ComplexEx {
public:
    float real, imagin;

    ComplexEx() {}

    ComplexEx operator+(const ComplexEx &b) const {
        ComplexEx result;
        result.real = real + b.real;
        result.imagin = imagin + b.imagin;
        return result;
    }

    ComplexEx operator*(const ComplexEx &b) const {
        ComplexEx result;
        result.real = (real * b.real) - (imagin * b.imagin);
        result.imagin = (real * b.imagin) + (imagin * b.real);
        return result;
    }

    friend istream &operator>>(istream &input, ComplexEx &c) {
        cout << "Real: ";
        input >> c.real;
        cout << "Imaginary: ";
        input >> c.imagin;
        return input;
    }

    friend ostream &operator<<(ostream &output, const ComplexEx &c) {
        output << "Complex number: (" << c.real << ", " << c.imagin << ")";
        return output;
    }
};

int main() {
    int ch;
    int c = 0;
    ComplexEx multi;
    ComplexEx add;
    ComplexEx num1;
    ComplexEx num2;

    cout << "Enter the first complex number" << endl;
    cin >> num1;
    cout << "Enter the second complex number" << endl;
    cin >> num2;

    do {
        cout << "1: Addition" << endl;
        cout << "2: Multiplication" << endl;
        cout << "3: Exit" << endl;
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                add = num1 + num2;
                cout << "Result of addition: " << add << endl;
                break;
            case 2:
                multi = num1 * num2;
                cout << "Result of multiplication: " << multi << endl;
                break;
            case 3:
                c = 1;
                break;
            default:
                cout << "Wrong choice" << endl;
                break;
        }
    } while (c == 0);

    return 0;
}


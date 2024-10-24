#include <iostream>
using namespace std;
class ComplexNumbers
{
private:
    double real1;
    double imaginary1;

    double real2;
    double imaginary2;
public:

    void setNum(double real1, double imaginary1, double real2, double imaginary2) {

        this->real1 = real1;
        this->imaginary1 = imaginary1;

        this->real2 = real2;
        this->imaginary2 = imaginary2;
    }
    void addition() {

        if (imaginary1 + imaginary2 < 0)
            cout << real1 + real2 << imaginary1 + imaginary2 << "i";
        else
            cout << real1 + real2 << "+" << imaginary1 + imaginary2 << "i";
    }
    void subtraction() {

        if (imaginary1 - imaginary2 < 0)
            cout << real1 - real2 << imaginary1 - imaginary2 << "i";
        else  cout << real1 - real2 << "+" << imaginary1 - imaginary2 << "i";
    }
    void multiplication() {

        if (imaginary1 + imaginary2 < 0)
            cout << (real1 * real2 - imaginary1 * imaginary2)
            << (real1 * imaginary2 + imaginary1 * real2) << "i";
        else
            cout << (real1 * real2 - imaginary1 * imaginary2) << "+"
            << (real1 * imaginary2 + imaginary1 * real2) << "i";
    }
};
int main()
{
    setlocale(LC_ALL, "Russian");
    ComplexNumbers myComNum;
    double a1, a2, b1, b2;
    cout << "z1 = a1 + b1i" << endl << "z2 = a2 + b2i" << endl;

    cout << endl << "a1: ";
    cin >> a1;
    cout << endl << "b1: ";
    cin >> b1;
    cout << endl << "a2: ";
    cin >> a2;
    cout << endl << "b2: ";
    cin >> b2;
    myComNum.setNum(a1, b1, a2, b2);

    cout << endl << "Результат сложения: ";
    myComNum.addition();

    cout << endl << "Результат вычитания: ";
    myComNum.subtraction();

    cout << endl << "Результат умножения: ";
    myComNum.multiplication();
}

#include <iostream>
using namespace std;
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "\nBefore swap:\n";
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    swap(&num1, &num2);
    cout << "\nAfter swap:\n";
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    return 0;
}

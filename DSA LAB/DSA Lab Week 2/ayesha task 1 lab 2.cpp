
#include <iostream>
using namespace std;
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    cout << "Array elements using pointer:\n";
    for(int i = 0; i < 5; i++) {
        cout << "Element " << i+1 << ": " << *ptr << endl;
        ptr++;
    }
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    
    int arr[5] = {10, 20, 30, 60, 70};
    int n = 5;
    int searchElement;
    int updateIndex, newValue;
    bool found = false;
    cout << "Initial Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "\nEnter element to search: ";
    cin >> searchElement;
    for(int i = 0; i < n; i++) {
        if(arr[i] == searchElement) {
            cout << "Search Result: Element found at index " << i << "." << endl;
            found = true;
            break;
        }
    }
    if(!found) {
        cout << "Search Result: Element not found in the array." << endl;
    }
    cout << "\nEnter index to update: ";
    cin >> updateIndex;
    if(updateIndex >= 0 && updateIndex < n) {
        cout << "Enter new value: ";
        cin >> newValue;
        arr[updateIndex] = newValue;
        cout << "Update Status: Array updated successfully." << endl;
    } else {
        cout << "Update Status: No update performed due to invalid index." << endl;
    }
    cout << "\nFinal Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int number, position = -1;
    cout << "Enter the number to search: ";
    cin >> number;
    for (int i = 0; i < 5; i++) {
        if (arr[i] == number) {
            position = i; 
            break;        
        }
    }

    if (position != -1) {
        cout << "Number " << number << " found at position " << position + 1 << "." << endl;
    } else {
        cout << "Number " << number << " not found in the array." << endl;
    }

    return 0;
}

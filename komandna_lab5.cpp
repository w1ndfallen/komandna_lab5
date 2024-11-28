#include <iostream>

using namespace std;

// Denis
int main() {
    int A[12];
    cout << "Enter 12 integers for array A: " << endl;
    for(int i = 0; i < 12; i++) {
        cin >> A[i];
    }

    // Search for the second odd element
    int oddCount = 0;
    int secondOdd = 0;
    for(int i = 0; i < 12; i++) {
        if(A[i] % 2 != 0) {
            oddCount++;
            if(oddCount == 2) {
                secondOdd = A[i];
                break;
            }
        }
    }
// Denis

// Maksim
    if(oddCount < 2) {
        cout << "There are not enough odd elements in the array to perform the operation." << endl;
        return 0;
    }

    // Creating an array C
    int C[12];
    C[0] = secondOdd; // The first element is the second odd

    for(int i = 1; i < 12; i++) {
        if(A[i] != secondOdd) {
            C[i] = A[i] / secondOdd;
        } else {
            C[i] = A[i]; // Avoiding dividing by yourself
        }
    }
// Maksim

// Matvii
    // Output of results
    cout << "Initial array A: ";
    for(int i = 0; i < 12; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    cout << "New array C:";
    for(int i = 0; i < 12; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}
// Matvii

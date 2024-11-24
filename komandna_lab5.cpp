#include <iostream>
using namespace std;

int main() {
    int A[12];
    cout << "Введіть 12 цілих чисел для масиву A:" << endl;
    for(int i = 0; i < 12; i++) {
        cin >> A[i];
    }

    // Пошук другого непарного елемента
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

    if(oddCount < 2) {
        cout << "У масиві недостатньо непарних елементів для виконання операції." << endl;
        return 0;
    }

    // Створення масиву C
    int C[12];
    C[0] = secondOdd; // Перший елемент - другий непарний

    for(int i = 1; i < 12; i++) {
        if(A[i] != secondOdd) {
            C[i] = A[i] / secondOdd;
        } else {
            C[i] = A[i]; // Уникнення ділення на себе
        }
    }

    // Виведення результатів
    cout << "Початковий масив A: ";
    for(int i = 0; i < 12; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    cout << "Новий масив C: ";
    for(int i = 0; i < 12; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}

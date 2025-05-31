#include <iostream>
using namespace std; // Добавлено для использования cout и endl

int main() {
    int arr[] = {64, 34, 34, 25, 61, 12, 22, 11, 90, 42, 99};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Исправлено с arr[i << " " на arr[i] << " "
    }
    cout << endl;
    
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    cout << "Output: "; // Исправлено с cout < на cout <<
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n], even[n], odd[n], evenCount = 0, oddCount = 0;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            even[evenCount++] = arr[i];
        } else {
            odd[oddCount++] = arr[i];
        }
    }

    cout << "Even elements: ";
    for (int i = 0; i < evenCount; ++i) {
        cout << even[i] << " ";
    }

    cout << "\nOdd elements: ";
    for (int i = 0; i < oddCount; ++i) {
        cout << odd[i] << " ";
    }

    cout << endl;
    return 0;
}

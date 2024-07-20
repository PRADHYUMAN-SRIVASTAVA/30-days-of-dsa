#include <iostream>
#include <vector>

using namespace std;

void moveZeroesToEnd(vector<int>& arr) {
    int n = arr.size();
    int nonZeroIndex = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < n; ++i) {
        if (arr[i] != 0) {
            arr[nonZeroIndex++] = arr[i];
        }
    }

    // Fill the rest of the array with zeros
    while (nonZeroIndex < n) {
        arr[nonZeroIndex++] = 0;
    }
}

int main() {
    vector<int> arr = {1, 2, 0, 4, 3, 0, 5, 0};

    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    moveZeroesToEnd(arr);

    cout << "Array after moving zeroes to the end: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

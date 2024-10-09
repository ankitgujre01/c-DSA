#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    int swapCount = 0;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap the elements
                swap(arr[j], arr[j+1]);
                swapCount++;
            }
        }
    }
    cout << "Total swaps: " << swapCount << endl;
}

int main() {
    int arr[] = {6, 5, 4, 3, 2, 1}; // Worst case scenario (reverse sorted)
    int n = sizeof(arr) / sizeof(arr[0]);
    
    bubbleSort(arr, n);
    
    return 0;
}


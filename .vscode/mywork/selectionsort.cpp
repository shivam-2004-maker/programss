#include<iostream>
using namespace std;

void selectionSort(int arr[], int n) {

    // Outer loop: controls number of passes
    // After each pass, one element is placed correctly
    for(int i = 0; i < n-1; i++) {

        // Assume current index has minimum element
        int minIndex = i;

        // Inner loop: find the smallest element in remaining array
        for(int j = i+1; j < n; j++) {

            // Compare current element with current minimum
            if(arr[j] < arr[minIndex]) {

                // Update minIndex if smaller element is found
                minIndex = j;
            }
        }

        // Swap the smallest element with the current position
        swap(arr[i], arr[minIndex]);
    }
}

int main() {

    // Given array
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;

    // Call sorting function
    selectionSort(arr, n);

    // Print sorted array
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;   // Take input for size of square

    int i = 1;  // Outer loop counter (rows)

    // Loop for rows
    while(i <= n) {

        int j = 1;  // Inner loop counter (columns)

        // Loop for columns
        while(j <= n) {
            cout << "* ";   // Print star with space
            j = j + 1;      // Move to next column
        }

        cout << endl;  // Move to next line after one row
        i = i + 1;     // Move to next row
    }

    return 0;  // Program ends successfully
}
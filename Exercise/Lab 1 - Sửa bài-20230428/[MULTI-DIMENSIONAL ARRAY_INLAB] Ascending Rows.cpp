#include <iostream>

using namespace std;

int ascendingRows(int arr[][1000], int row, int col) {
    int count = 0;  // Count the number of HN1 rows
    
    // Loop through every rows
    for (int i = 0; i < row; i++) 
    {
        bool flag = true;   // Flag: true if the row is HN1

        // Check if the current row is HN1
        for (int j = 1; j < col; j++) 
        {
            if (arr[i][j] < arr[i][j - 1]) 
            {
                flag = false;
                break;
            }
        }

        // Count + 1 if the current row is HN1, else not
        if (flag) 
            ++count;
    }
    return count;
}

int main() {
    int arr[][1000] = { {32,4,9},{-80,37,71},{-91,-79,-55} };
    cout << ascendingRows(arr, 3, 3);
}
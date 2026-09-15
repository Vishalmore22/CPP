#include <iostream>
using namespace std;

int main()
{
    // --- 1D Array Sum ---
    int n;
    cout << "Enter size of 1D array: ";
    cin >> n;

    int arr1D[n];
    int sum1D = 0;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1D[i];
        sum1D += arr1D[i];
    }
    cout << "Sum of 1D array = " << sum1D << "\n\n";

    // --- 2D Array Sum ---
    int rows, cols;
    cout << "Enter rows and columns for 2D array: ";
    cin >> rows >> cols;

    int arr2D[rows][cols];
    int sum2D = 0;

    cout << "Enter matrix elements (" << rows << "x" << cols << "):\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr2D[i][j];
            sum2D += arr2D[i][j];
        }
    }
    cout << "Sum of 2D array = " << sum2D << endl;

    return 0;
}
#include <iostream>
using namespace std;

//Eficient : O(n)

int maxSum(int arr[], int n)
{
    int res = arr[0];
    int maxEnding = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxEnding = max(maxEnding + arr[i],arr[i]);
        res = max(maxEnding,res);
    }
    return res;
}

int main()
{
    int n;
    cout << "Enter the size of array = ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements = ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\nArrays elements = ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nMaximum sum of Sub Array = " << maxSum(arr, n);
    return 0;
}
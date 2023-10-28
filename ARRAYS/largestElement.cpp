#include <iostream>
using namespace std;

int largestElement(int arr[], int n)
{
    int res = 0;
    for (int i = 1; i < n; i++)
    {
        if(arr[i]>arr[res]){
            res = i;
        }
    }
    return arr[res];
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

    cout << "largest element = " << largestElement(arr, n);

    cout << "\nArrays elements = ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
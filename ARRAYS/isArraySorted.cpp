#include<iostream>
using namespace std;

bool isSorted(int arr[],int n){
    for (int i = 1; i < n; i++)
    {
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout << "Enter the size of array = ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements = ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array is sorted (True(1) or false(0)) = " << isSorted(arr, n);

    cout << "\nArrays elements = ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
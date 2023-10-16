#include<iostream>
using namespace std;

void leftRotateByOne(int arr[],int n){
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;

    cout << "Array elements after left rotate by one = ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){

    int n;
    cout << "Enter the size of the array = ";
    cin >> n;

    int arr[n];
    cout << "Enter the array element = ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array elements before left rotate by one = ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";
    leftRotateByOne(arr,n);
    return 0;
}
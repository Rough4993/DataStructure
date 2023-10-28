#include<iostream>
using namespace std;

void remDups(int arr[],int n){
    int res=1;
    for (int i = 1; i < n; i++)
    {
        if(arr[i]!=arr[res-1]){
            arr[res] = arr[i];
            res++;
        }
    }
    
    cout << "\nArrays elements after removing duplicates = ";

    for (int i = 0; i < res; i++)
    {
        cout << arr[i] << " ";
    }
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
    cout << "\nArrays elements before removing duplicates = ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    remDups(arr, n);

    return 0;
}
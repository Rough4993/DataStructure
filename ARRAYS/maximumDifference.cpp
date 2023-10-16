#include<iostream>
using namespace std;

//Efficient : TC = O(n)
int maxDiff(int arr[],int n){
    int res = arr[1] - arr[0],minValue = arr[0];
    for (int i = 1; i < n; i++)
    {
        res = max(res,arr[i]-minValue);
        minValue = min(minValue,arr[i]);
    }
    return res;
}

//Navie : TC = O(n^2)
int max_diff(int arr[],int n){
    int res = arr[1] - arr[0];
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
           res = max(res,arr[j]-arr[i]);
        }
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

    cout<<"\nMaximum Difference using Efficient solution = "<< maxDiff(arr,n);
    cout<<"\nMaximum Difference using Navie solution = "<< max_diff(arr,n);
    return 0;
}
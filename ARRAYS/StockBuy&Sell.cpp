#include<iostream>
using namespace std;

int maxProfit(int arr[],int n){
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        if(arr[i]>arr[i-1]){
            profit += (arr[i] - arr[i-1]);
        }
    }
    
    return profit;
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

    cout<<"\nProfit of array = "<<maxProfit(arr,n);
    
    return 0;
}
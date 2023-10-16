#include<iostream>
using namespace std;


//Efficient : O(n)

int maxEvenOdd(int arr[],int n){
    int res = 1;
    int curr = 1;
    for(int i=1;i<n;i++){
        if((arr[i]%2==0 && arr[i-1]%2!=0) || (arr[i]%2!=0 && arr[i-1]%2==0)){
            curr++;
            res= max(res,curr);
        }
        else{
            curr = 1;
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

    cout << "\nMaximum sum of Sub Array = " << maxEvenOdd(arr, n);
    return 0;
}
#include<iostream>
using namespace std;

int majorityElement(int arr[],int n){
    int res = arr[0] , count = 1;
    for(int i=1;i<n;i++){
        if(res == arr[i]){
            count++;
        }
        else { 
            count--;
        }
        if(count == 0){
            res = arr[i];
            count = 1;
        }
    }
    count = 0;
    for(int i=0 ;i<n;i++){
        if(res == arr[i]){
            count++;
        }
    }
    if(count <= n/2){
        return -1;
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

    cout<<"\nMajority Element = "<< majorityElement(arr,n);
    return 0;
}
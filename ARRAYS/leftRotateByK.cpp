#include<iostream>
using namespace std;

void reverse(int arr[],int low,int high){
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}


void leftRotateByK(int arr[],int n,int d){
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
    cout << "Array elements after left rotate by d = ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}


int main(){

    int n;
    cout << "Enter the size of the array = ";
    cin >> n;

    int d;
    cout << "Enter the d value = ";
    cin >> d;

    int arr[n];
    cout << "Enter the array element = ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array elements before left rotate by d = ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";
    leftRotateByK(arr,n,d);
    return 0;
}
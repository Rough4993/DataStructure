#include<iostream>
using namespace std;

void insert(int arr[], int n, int x, int cap, int pos){
    if(n==cap){
        cout<<"Array is full.";
    }
    int index = pos -1;
    for (int i = n-1;i>=index; i++)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = x;
    cout<<"Array elements = ";
    for (int i = 0; i < cap; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main(){

    int capacity,n,target,position;
    cout<<"Enter the capacity of array = ";
    cin>>capacity;

    int arr[capacity];
    cout<<"Enter the size of array = ";
    cin>>n;
    
    cout<<"Enter the elements = ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"\nEnter the inserting element = ";
    cin>>target;

    cout<<"Enter the position = ";
    cin>>position;

    insert(arr,n,target,capacity,position);

    return 0;
}
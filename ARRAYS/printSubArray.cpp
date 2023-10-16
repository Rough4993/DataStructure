#include<iostream>
using namespace std;

void printArray(int* arr,int s, int e){
    for (int i = s; i <= e; i++)
    {
        cout << arr[i]<<" ";
    }
}

void subArray(int* arr,int n){
    
    for(int s=0;s<n;s++){
        for(int e=s;e<n;e++){
            printArray(arr,s,e);
        }
    
    }
}

int main(){
    int n;
    cout<<"Enter the size of array = ";
    cin>>n;

    int arr[n];
    cout<<"Enter the array elements = ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    subArray(arr,n);
    cout<<"\n";
    return 0;
}
#include<iostream>
using namespace std;

int search(int arr[],int n,int x){
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==x){
            return arr[i];
        }
    }
    return -1; 
}


int main(){

    int n,target;
    cout<<"Enter the size of array = ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements = ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"\nEnter the searching element = ";
    cin>>target;
    
    cout<<search(arr,n,target);

    
    return 0;
}
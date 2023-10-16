#include<iostream>
using namespace std;

int deleteElement(int arr[],int n,int x){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==x){
            break;
        }
    }
    if(i==n){
        return n;
    }
    for (int j = i;j < n-1; j++)
    {
        arr[j] = arr[j+1];
    }
    return (n-1);
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
    cout<<"Before array elements = ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"\nEnter the deleting element = ";
    cin>>target;

    cout<<"Size after deleting targeted element = "<<deleteElement(arr,n,target)<<"\n";
    cout<<"After array elements = ";
    for (int i = 0; i < n-1; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

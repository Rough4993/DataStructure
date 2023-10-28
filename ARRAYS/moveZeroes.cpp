#include<iostream>
using namespace std;

void moveZero(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
    cout << "Array elements after moving zeros = ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

}

int main(){

    int n;
    cout << "Enter the size of the array = ";
    cin >> n;

    int arr[n];
    cout << "Enter the array element = ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array elements = ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";
    moveZero(arr,n);
    return 0;
}
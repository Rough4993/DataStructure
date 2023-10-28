#include <iostream>
using namespace std;

// TC : O(n)

int leadersInArray(int arr[], int n)
{
    int current_leader = arr[n - 1];
    cout << current_leader << " ";
    for (int i = n - 2; i >= 0; i--)
    {
        if (current_leader < arr[i])
        {
            current_leader = arr[i];
            cout << arr[i] << " ";
        }
    }
}

// TC : O(n^2)

void leaders(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] <= arr[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == false)
        {
            cout << arr[i] << " ";
        }
    }
}

int main()
{

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
    cout << "\nLeaders of Array = ";

    leadersInArray(arr, n);

    cout << "\nLeaders of Array using O(n^2)= ";
    leaders(arr, n);
    return 0;
}
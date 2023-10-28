#include <iostream>
using namespace std;

// int consecutiveOnes(int arr[],int n){
//     int res = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int curr = 0;
//         for (int j = i; j < n; j++)
//         {
//             if (arr[j] == 1)
//             {
//                 curr++;
//             }
//             else
//                 break;
//         }
//         res = max(res,curr);
//     }
//     return res;
// }

int consecutiveOnes(int arr[], int n)
{
    int res = 0,curr;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            curr = 0;
        }
        else
        {
            curr++;
            res = max(res, curr);
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

    cout << "\nConsecutive Ones = " << consecutiveOnes(arr, n);
    return 0;
}
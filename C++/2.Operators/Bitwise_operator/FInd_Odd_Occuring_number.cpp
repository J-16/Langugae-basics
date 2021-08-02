#include <iostream>
  
using namespace std;

int findOdd(int arr[], int n)
{
    int res = 0, i;
    for (i = 0; i < n; i++){
        res ^= arr[i];
        cout << "index is  " << i << " res is " << res << " and array is " << arr[i] << endl;
    }
    return res;
}
  
// Driver Method
int main(void)
{
    int arr[] = { 12, 12, 14, 90, 14, 14, 14, 90 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << sizeof(arr[0]) << endl << n << endl;
    cout << "The odd occurring element is " << findOdd(arr, n);
    return 0;
}
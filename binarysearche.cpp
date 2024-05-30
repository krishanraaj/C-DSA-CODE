#include<iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int x)
{
    while(low<=high) 
    {
        int mid = low + (high - low) / 2;

        if(arr[mid] == x)
        return mid;

        if(arr[mid] < x)
        low = mid + 1;

        else
           high = mid - 1;
    }
     
     return -1;
}

int main(void)
{
   int arr[] = {3, 1, 2, 6, 4, 8, 9};
   int x = 8;
   int n = sizeof(arr) / sizeof(arr[0]);
   int result = binarySearch(arr, 0, n-1, x);
   (result == -1)
        ?  cout<< "Element is not present in array"
        : cout<< "element is present at index " <<result;
    return 0;
      
}

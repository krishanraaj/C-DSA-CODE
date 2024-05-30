#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1, 5, 7, 0, 9};
    int key = 9;

    for(int i=0; i<=4; i++)
    {
        if(arr[i] == key)
        {
            cout<<arr[i]<<endl;
        }
    }
}
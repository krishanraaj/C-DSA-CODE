#include<iostream>
using namespace std;

void linerSearch(int arr[], int n)
{
  int temp = -1;
  for(int i=0; i<5; i++)
  {
    if(arr[i] == num)
    {
        cout<<"Element fount at location"<<i<<endl;
        temp = 0;
    }

  }
  if(temp==-1)
  {
    cout<<"Element not found";
  }
}

int main
{
    int arr[5] = {1, 22, 34, 5, 7};
    cout<<"please enter element to search: "<<endl;
    int num;
    cin>>num;
    linerSearch(arr,num);
    return 0;
}

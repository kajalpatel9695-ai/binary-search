#include<iostream>
using namespace std;
int main()
{
int arr[]={2,4,5,6,7,8,9,12,13,34};
int lb=0,ub=(sizeof(arr)/sizeof(arr[0]))-1;
int mid,pos=-1;
cout<<"enter the element you want to search";
int ele;
cin>>ele;
while(lb<=ub||pos!=-1)
{
    mid=(lb+ub)/2;
    if(arr[mid]==ele)
    {
        pos=mid;
        break;
    }
    if(ele>arr[mid])
    {
        lb=mid+1;
    }
    if(ele<arr[mid])
    {
        ub=mid-1;
    }
}
    if(pos==-1)
    {
        cout<<"element not found";
    }
    else
    {
        cout<<"element found at position "<<pos+1;
    }

    return 0;
}
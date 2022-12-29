
#include<iostream>
using namespace std;

int main()
{
    int arr[5]={1,2,3,5,6};
    int res=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        if(arr[i]>res)
        {  
            res=arr[i];
        }
    }
    cout<<res;
}
#include<iostream>
using namespace std;
/*
int largest(int arr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        if(res=0)
        res=arr[0];
        if(arr[i]>res)
        {  
            res=arr[i];
        }
    }
    return res;
}
int main()
{
        int arr[5]={1,2,3,5,6};
        int res=-1;
        int n=sizeof(arr)/sizeof(arr[0]);
        int lar=largest(arr,n);
        for(int j=0;j<n;j++)
        {
            if(arr[j]!=lar)
            {
                if(arr[j]>res)
                    {  
                    res=arr[j];
                    }
            }
        }
        cout<<res;
}
*/
int main()
{
    int arr[5]={1,2,3,5,6};
    int res,n,largest;
    n=sizeof(arr)/sizeof(arr[0]);
    res=-1;largest=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[largest])
        {
            res=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest])
        {
            if(res=-1 || arr[i]>arr[res])
            {
                res=i;
            }
        }
    }
    cout<<res;

}
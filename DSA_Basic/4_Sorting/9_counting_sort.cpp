#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/* naive 
int countingsort(int arr[],int n,int k)
{
    int count[k];
    for(int i=0;i<k;i++)
    {
        count[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        count[arr[i]] ++;
    }
    int index=0;
    for(int i=0;i<k;i++)
    {
        int c=count[i];
        for(int j=c;j>0;j--)
        {
            arr[index]=i;
            index++;
        }
    }
    return 0;
}
*/

int countingsort(int arr[],int n,int k)
{
    int count[k];
    int output[n];
    for(int i=0;i<k;i++)
    {
        count[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        count[arr[i]] ++;
    }
    for(int i=1;i<k;i++)
    {
        count[i] = count[i]+count[i-1];
    }

    /*

    for(int i=0;i<=n;i++)
    {
        output[count[arr[i]]-1] = arr[i];
        count[arr[i]]--;
    }

    */

   // reverse traversal for stable
   for(int i=n;i>=0;i--)
    {
        output[count[arr[i]]-1] = arr[i];
        count[arr[i]]--;

    }

    
    for(int i=0;i<n;i++)
    {
        arr[i]=output[i];
    }
    return 0;

}

int main()
{
    int arr[]={1,4,4,1,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 5;
    countingsort(arr,n,k);
    for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	cout << "\n";
    
}
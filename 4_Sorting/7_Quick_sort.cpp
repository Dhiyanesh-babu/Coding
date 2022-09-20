#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/* naive
void partition(int arr[], int l, int h)
{
    int p=0,index=0;
    int temp[h-l-1];
    for(int i=l;i<=h;i++)
    {
        if(arr[i]<arr[0])
        {
            temp[index++]=arr[i];
        }
    }
    for(int i=l;i<=h;i++)
    {
        if(arr[i]>arr[p])
        {
            temp[index++]=arr[i];
        }
    }
    for(int i=l;i<=h;i++)
    {
        arr[i]=temp[i-l];
    }
    

}
*/


/* lometo

int partition(int arr[],int l,int h)
{
    int p = arr[h];
    int i=l-1;
    for(int j=l;j<=h-1;j++)
    {
        if(arr[j]<p)
        {
            i++;
            swap(arr[i],arr[j]);
        }
            
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}

void quicksort(int arr[], int l, int h)
{
    if(l<h)
    {
    int p = partition(arr,l,h);
    quicksort(arr,l,p-1);
    quicksort(arr,p+1,h);
    }
}


*/

int partition(int arr[],int l,int h)
{
    int p = l;
    int i = l-1,j=h+1;
    while(true)
    {
        
        do
        {
            i++;
        }while(arr[i]<arr[p]);
        do
        {
            j--;
        }while(arr[j]>arr[p]);
        if(i>=j)
        {
            return j;
        }
        swap(arr[i],arr[j]);
    }
}


void quicksort(int arr[], int l, int h)
{
    if(l<h)
    {
    int p = partition(arr,l,h);
    quicksort(arr,l,p);
    quicksort(arr,p+1,h);
    }
}




int main()
{
    int arr[7] = {8,4,7,9,3,10,5};
    int n= 7,l=0,h=n-1;
    
    quicksort(arr,l,h);

    for(int y=0;y<n;y++)
    {
        cout<< arr[y]<< "\n";
    }
}
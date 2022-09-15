#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int merge(int *a, int *b, int m, int n)
{
    int i=0,j=0;
    while( i<m && j<n)
    {
        if(a[i]<b[j])
        {
            cout<< a[i++] <<"\n";
        }
        else
        {
            cout<< b[j++] <<"\n";
        }
    }
    while(i<m)
    {
        cout<< a[i++] <<"\n";
    }
    while(j<n)
    {
        cout<< b[j++] <<"\n";
    }
    return 0;

}



int main()
{
    int a[4] = {10,15,20,40};
    int b[5] = {5,6,6,10,15};

    int m = sizeof(a)/sizeof(a[1]);
    int n = sizeof(b)/sizeof(b[1]);

    merge(a,b,m,n);

}
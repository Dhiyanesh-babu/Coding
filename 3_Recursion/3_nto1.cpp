#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int nto1(int n)
{
    if(n==0)
    return 0;
    
    cout<<n;
    nto1(n-1);
    
    return 0;
   
    
}

int main()
{
    int n=5;
    nto1(n);
}
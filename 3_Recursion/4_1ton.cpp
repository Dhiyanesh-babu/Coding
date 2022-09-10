#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
int 1ton(int n)
{
    if(n==0)
    return 0;

    nto1(n-1);
    cout<<n;
    
    return 0;    
}

int main()
{
    int n=5;
    1ton(n);
}
*/
void oneton(int n, int k)
{
    if(n<1)
    return ;
    int g=k;
    cout<<g;
    oneton(n-1,k+1);
}

int main()
{
    int n=5;
    oneton(n,1);
}
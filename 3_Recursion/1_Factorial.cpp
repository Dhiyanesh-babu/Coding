#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int recur(int n)
{
    if (n==0||n==1)
    {
        return 1;
    }
    return n*recur(n-1);
}
int main()
{
    int n=5;
    int res=recur(n);
    cout<<res;
}
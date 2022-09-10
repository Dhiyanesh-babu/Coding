#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int count = 0;

int pieces(int n, int a, int b, int c)
{
    if(n==0)
    {
        return 0 ;
    }

    if(n<0)
    {
        return -1 ;
    }
    int res = max(max(pieces(n-a,a,b,c),pieces(n-b,a,b,c)),pieces(n-c,a,b,c));

    if(res == -1)
    {
        return -1;
    }

    else 
    {
        return res+1;
    }

}







int main()
{
    int n,a,b,c;
    n=23;a=11,b=9,c=12;
    int count = pieces(n,a,b,c);
    cout << count;

}
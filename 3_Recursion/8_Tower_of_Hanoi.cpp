#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void tohh(int n,char a,char b,char c)
{
    if(n==1)
    {
        cout<<"move 1 from a to c\n";
        return;
    }
    tohh(n-1,a,c,b);
    cout<<"move the "<< n << " discs from "<< a << " to " << c <<"\n" ;
    tohh(n-1,b,a,c);
    
    
    }






int main()
{
    int n;
    char a='a',b='b',c='c';
    cin>>n;
    tohh(n,a,b,c);
    return 0;
}
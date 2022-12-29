#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void substr(string s, string curr,int index)
{
    if(index == s.length())
    {
        cout<<curr<<" ";
        return ;
    }
    
    
    substr(s,curr,index+1);
    substr(s,curr+s[index],index+1);    
    
}




int main()
{
    string s;
    cin >> s;
    substr(s,"",0);

}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/* not working
int rotate(string s1,string s2,int n)
{
    for(int i=0;i<n;i++)
    {
        int l =i;
        for(int j=0;j<n;j++)
        {
            if(s1[i]==s2[j])
            {
                int r =j;
                int count = 1;
                if(s1[(++l)%n] == s2[(++r)%n])
                {
                    count++;
                    if(count==4)
                    {
                        cout<<"roatation";
                        return 0;
                    }
                }

            }
        }
    }
    cout<<"not rotation";

}

*/

int rotate(string s1,string s2)
{
    s1=s1+s1;
    return(s1.find(s2)!=string::npos);
    
}

int main()
{
    string s1="abcd", s2="bcda";
    int n=s1.length();
    cout<<rotate(s1,s2);
    return 0;
}
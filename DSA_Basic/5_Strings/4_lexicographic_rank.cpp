#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int fact(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    return n*fact(n-1);
}

int lexrank(string s)
{
    int n = s.length();
    int f = fact(n);
    int arr[256] = {0};
    int rank =1;
    for(int i=0;i<n;i++)
    {
        arr[s[i]]++;
    }
    for(int i=1;i<256;i++)
    {
        arr[i] = arr[i]+arr[i-1];
    }
    for(int i=0;i<n;i++)
    {
        f = f/(n-i);
        rank = rank + arr[s[i]-1] * f;
        for(int j=s[i];j<256;j++)
        {
            arr[j]--;
        }
    }
    return rank;

}



int main()
{
    string s = "bac";
    int rank = lexrank(s);
    cout << rank;
}

/* naive find all permuations(next_permutation) and sort it*/ 
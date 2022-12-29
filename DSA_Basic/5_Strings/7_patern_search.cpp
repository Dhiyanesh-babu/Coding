#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/* my niave wrong
int pat_search(string txt, string pat,int n1, int n2)
{
    for(int i=0;i<n1;i++)
    {
        int l=i;
        if(txt[i]==pat[0])
        
        {
            int r=0;
            for(int j=0;j<n2;j++)
            {
                if(i<n1 && txt[l++]==pat[r++])
                {
                    c=c+1;
                    if(c==n2)
                    {
                        cout<<i;
                    }
                }


            }
        }
    }
    return 0;
}
*/

/* naive
int pat_search(string txt, string pat, int n, int m)
{
    for(int i=0;i<=n-m;i++)
    {
        int j=0;
        for(j=0;j<m;j++)
        {
            if(txt[i+j]!=pat[j])
            {
                break;
            }
        }
        if(j==m)
        {
            cout<<i<<"\t";
        }
    }
    return 0;
}

*/

// ony if pat has distinct elements
int pat_search(string txt, string pat, int n, int m)
{
    for(int i=0;i<=n-m;)
    {
        int j=0;
        for(j=0;j<m;j++)
        {
            if(txt[i+j]!=pat[j])
            {
                break;
            }
        }
        if(j==m)
        {
            cout<<i<<"\t";
        }
        if(j==0)
        {
            i++;
        }
        else
        {
            i=i+j;
        }
    }
    return 0;
}





int main()
{
    string txt = "abcdabce", pat = "abce";
    int n1 = txt.length();
    int n2 = pat.length();
    pat_search(txt,pat,n1,n2);
    return 0;

}
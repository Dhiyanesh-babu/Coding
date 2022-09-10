#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

/*

bool palindrome(string s, int low, int high)
{
    if (low>=high)
    return true;
    if(s[low]==s[high])
    {
        return palindrome(s,low+1,high-1);
    }
    else 
    {
        return false;
    }
}



int main()
{
    string s= "A man, a plan, a canal: Panama";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            //using in-built function to erase element
            s.erase(s.begin() + i);
            i--;
        }
    }    
    for (int i = 0, len = s.size(); i < len; i++)
    {
        // check whether parsing character is punctuation or not
        if (ispunct(s[i]))
        {
            s.erase(i--, 1);
            len = s.size();
        }
    }
    for (int i = 0; i < s.length(); i++)
  	{
  		s[i] = tolower(s[i]);
  	}

    int n=s.length();
    bool ans=palindrome(s,0,n-1);
    cout<<ans;
    
}
*/

int main()
{
    string s="hleh";
    int l = 0;
		int r = s.size() - 1;
		while(l < r){
			while(l < r && !isalnum(s[l])){
				l++;
			}
			while(l < r && !isalnum(s[r])){
				r--;
			}
			if(tolower(s[l]) != tolower(s[r])){
                cout<<"no";
				return false;
			}
			l++;
			r--;
		}
		cout<<"yes";
}
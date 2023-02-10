#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;


bool balance(string expr)
{
    stack<char> temp;
    for (int i = 0; i < expr.length(); i++) {
        if (temp.empty()) {
            temp.push(expr[i]);
        }
        else if ((temp.top() == '(' && expr[i] == ')')
                 || (temp.top() == '{' && expr[i] == '}')
                 || (temp.top() == '[' && expr[i] == ']')) {
            temp.pop();
        }
        else {
            temp.push(expr[i]);
        }
    }
    if (temp.empty()) {
        return true;
    }
    return false;
}





int main()
{
	string s1 = "[]";
	string s2 = "{";
	cout<<"hi";
	cout<<balance(s1);
	cout<<balance(s2);


}
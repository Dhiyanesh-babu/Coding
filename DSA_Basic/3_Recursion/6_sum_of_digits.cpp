#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int dsum=0;


int sum(int n)
{
    if(n/10 == 0)
    {
        return n;
    }

    return n%10 + sum(n/10);
}



int main()
{
    int n;
    cin>>n;
    int total = n;
    do
    {
        total = sum(total);
    }
    while(total/10 != 0);
    cout<<total;

}


/*

1 1
2 2
3 3
4 4
5 5
6 6
7 7
8 8
9 9
---------
10 1
11 2
12 3
13 4
14 5
15 6
16 7
17 8
18 9

You can probably notice the cycle, that is the digit num starts from 0 and ends at 9

If you think about it, it is obvious as every time we are adding one to the modulus

Thus the ans is the remainder of the division of the number with 9

Unless remainder is 0 then the ans is 9

We need to be carefull of the 0 case, where the ans is 0

Code
int addDigits(int num) {
	if ( num == 0 ) return 0;
	return num%9 == 0 ? 9 : num%9 ;
}

*/
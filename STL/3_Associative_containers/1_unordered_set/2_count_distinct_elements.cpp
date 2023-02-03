#include<iostream>
#include<unordered_set>
using namespace std;


/* naive

int count(int arr[], int n)
{
	int res=0;
	for(int i=0;i<n;i++)
	{
		bool flag=false;
		for(int j=i-1;j>=0;j--)
		{
			if(arr[i]==arr[j])
			{
				flag=true;
				break;
			}
		}
		if(flag==false)
		{
			res=res+1;
		}
	}
	cout<<res;
}

*/

int count(int arr[], int n)
{
	unordered_set<int> s;
	for(int i=0;i<n;i++)
	{
		s.insert(arr[i]);
	}
	cout<<s.size();
}



int main()
{
	int arr[]={1,2,3,1,2,3,4,5,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);

	count(arr,n);
	
}


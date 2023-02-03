#include<iostream>
#include<unordered_map>
using namespace std;


int main()
{
	unordered_map<string,int> m;
	m["gfg"]=10;
	m["hello"]=20;
	m.insert({"hii",30});
	for(auto x:m)
	{
		cout<<x.first<<"\t"<<x.second<<"\n";
	}


	if(m.find("idle")==m.end())
	{
		cout<<"no";
		cout<<"\n";
	}
	else
	{
		cout<<"found";
		cout<<"\n";
	}



    auto it=m.find("gfg");
    if(it!=m.end())
    {
    	cout<<(it->second)<<"\n";
    }

    if(m.count("gfg")>0)
    {
    	cout<<"found"<<"\n";
    }
    else
    {
    	cout<<"no"<<"\n";
    }

    for(auto it=m.begin();it!=m.end();it++)
    {
    	cout<<it->first<<"\t"<<it->second<<"\n";
    }
    m.erase("gfg");
    m.erase(m.begin(),m.end());
    cout<<(m.size());


}
#include <iostream>
#include <map>
using namespace std;


int main() {
	// insert,at,size
	map<int,int> m;
	m.insert({10,200});
	m[5]=100;
	m.insert({3,300});

	for(auto &x:m)
	    cout<<x.first<<" "<<x.second<<endl;
	    
	cout<<"Size: "<<m.size()<<endl;
	
	m.at(10)=300;

    // end,clear,empty
    map<int,int> m1;
	m1.insert({10,200});
	m1[5]=100;
	m1.insert({3,300});

	for(auto it1=m1.begin();it1!=m1.end();it1++)
	    cout<<(*it1).first<<" "<<(*it1).second<<endl;
	    
	m1.clear();
	cout<<"Size: "<<m1.size()<<endl;
	cout<<"Empty: "<<(m1.empty()?"Yes":"No")<<endl;

    // find,count,lowerbound
    map<int,string> m2;
	m2.insert({5,"gfg"});
	m2.insert({2,"ide"});
	m2.insert({1,"practice"});

	if(m2.find(5)==m2.end())
	    cout<<"Not found";
	else
	    cout<<"Found";
	    cout<<endl;
	if(m2.count(2)==0)
	    cout<<"Not found";
	else
	    cout<<"Found";
	    cout<<endl;
	auto it2=m2.lower_bound(7);
	if(it2!=m2.end())
	    cout<<(*it2).first<<" ";
	else
	    cout<<"No Equal or Greater Value";


    // upperbound,erase
    map<int,string> m3;
	m3.insert({5,"gfg"});
	m3.insert({2,"ide"});
	m3.insert({1,"practice"});

	auto it3=m3.upper_bound(2);
	if(it3!=m3.end())
	    cout<<(*it3).first<<endl;
	else
	    cout<<"Greater Value"<<endl;
	    
	m3.erase(5);
	cout<<"Size: "<<m3.size()<<endl;
	
	m3.erase(m3.find(2),m3.end());
	cout<<"Size: "<<m3.size()<<endl;
	    

	    
	return 0;
}
#include <iostream>
#include <set>
using namespace std;


int main() {
    //  insert,begin,end
	set<int> s;
	s.insert(10);
	s.insert(5);
	s.insert(20);
	for (int x : s) {
	    cout<<x<<" ";
	}cout<<endl;
	
	set<int,greater<int>> s11;//Decreasing order
	s11.insert(10);
	s11.insert(5);
	s11.insert(20);
	for (auto it2=s11.begin();it2!=s11.end();it2++) {
	    cout<<(*it2)<<" ";
	}cout<<endl;

    // rbegin,rend,find,clear
    set<int,greater<int>> s1;//Decreasing order
	s1.insert(10);
	s1.insert(5);
	s1.insert(20);
	for (auto it3=s1.rbegin();it3!=s1.rend();it3++) {
	    cout<<(*it3)<<" ";
	}cout<<endl;
	
	auto it3=s1.find(10);
	if(it3==s1.end())
	    cout<<"Not found"<<endl;
	else
	    cout<<"Found"<<endl;
	    
	s1.clear();
	cout<<"Size: "<<s1.size()<<endl;

    // count,erase
    set<int> s2;
	s2.insert(10);
	s2.insert(5);
	s2.insert(20);
	s2.insert(7);
	
	if(s2.count(10))
	    cout<<"Found"<<endl;
	else
	    cout<<"Not Found"<<endl;
	    
	s2.erase(5);
	for(int x1: s2){
	    cout<<x1<<" ";
	}cout<<endl;
	
	auto it=s2.find(7);
	s2.erase(it);
	for(int x: s2){
	    cout<<x<<" ";
	}cout<<endl;



    // lower_bound,upper_bound
    set<int> s3;
	s3.insert(10);
	s3.insert(5);
	s3.insert(20);

	auto it5=s3.lower_bound(5);
	if(it5!=s3.end())
	    cout<<(*it5)<<endl;
	else
	    cout<<"Given element is greater than the largest"<<endl;
	   
	it5=s3.upper_bound(5);
	if(it5!=s3.end())
	    cout<<(*it5)<<endl;
	else
	    cout<<"Given element is greater than the largest"<<endl;

	
	return 0;
}
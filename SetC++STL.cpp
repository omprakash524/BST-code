#include<iostream>
#include<set>
using namespace std;
// set ignore duplicate values
int main(){
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(3);
    s.insert(40);
    s.insert(2);
    s.insert(9);
    s.insert(60);
    for(int x:s){
        cout<<x<<" ";
    }cout<<endl;
    // we use greater<int> fun to reverse the order
    set<int,greater<int>> s1;
    s1.insert(10);
    s1.insert(20);
    s1.insert(3);
    s1.insert(40);
    s1.insert(2);
    s1.insert(9);
    s1.insert(60);
    for(int y:s1){
        cout<<y<<" ";
    }cout<<endl<<endl;
    // range
    set<int> s2;
    s2.insert(10);
    s2.insert(20);
    s2.insert(3);
    s2.insert(40);
    s2.insert(2);
    s2.insert(9);
    s2.insert(60);
    for(auto it=s2.begin();it!=s2.end();it++){
        cout<<*it<<" ";
    }cout<<endl;
    auto it = s2.find(420);
    if(it==s.end()){cout<<"found\n";}else{
        cout<<"not Found\n";
    }
    s2.count(10);
    s2.erase(9);
    for(int z:s2){
        cout<<z<<" ";
    }
    auto it2 = s2.upper_bound(5);
    auto it1 = s2.lower_bound(9);
    if(it1!=s2.end()){
        cout<<(*it1)<<" ";
    }else{
        cout<<"Given element is greater than the target"<<endl;
    }
    s2.clear();
    cout<<s2.size()<<" ";

    return 0;
}

// begin,end,rbegin,rend,cbegin,cend,crbegin,crend,size,empty = O(1)
// insert,find,count,lower_bound,upper_bound,erase(val) = O(log n)
// erase(it) = amortized O(1)


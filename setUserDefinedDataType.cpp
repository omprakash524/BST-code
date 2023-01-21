#include<iostream>
#include<set>
using namespace std;
struct Test{
    int x;
    bool operator<(const Test&t)const{
        // return(this->x<t.x); // decreasing order
        return(this->x>t.x); // increasing order
    }
};
int main(){
    set<Test> s;
    s.insert({3});
    s.insert({4});
    s.insert({7});
    s.insert({1});
    for(Test t:s){
        cout<<t.x<<" ";
    }

    return 0;
}
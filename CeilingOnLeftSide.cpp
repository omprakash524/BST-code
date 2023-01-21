#include <bits/stdc++.h>
using namespace std;

// naive mthod
// TC  : O(n^2)
// Aux space : O(1)
void printCeiling(int arr[], int n){
    cout<<"-1"<<" ";
    for(int i=1;i<n;i++){
        int diff=INT_MAX;
        for(int j=0;j<i;j++){
            if(arr[j]>=arr[i])
                diff=min(diff,arr[j]-arr[i]);
        }
        if(diff==INT_MAX)
            cout<<"-1"<<" ";
        else
            cout<<(arr[i]+diff)<<" ";
    }
}

// efficient method
// 1. create a self balancing BST(set in cpp)
// insert arr[0] int s;
// TC : O(nlogn)
void printCeiling1(int arr[], int n){
    cout<<"-1"<<" ";
    set<int> s;
    s.insert(arr[0]);
    for(int i=1;i<n;i++){
        if(s.lower_bound(arr[i])!=s.end())
            cout<<*(s.lower_bound(arr[i]))<<" ";
        else
            cout<<"-1"<<" ";
        s.insert(arr[i]);
    }
}

int main() {
	
	int arr[]={2,8,30,15,25,12};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	cout<<"naive     : ";printCeiling(arr,n);cout<<endl;
	cout<<"efficient : ";printCeiling1(arr,n);
}
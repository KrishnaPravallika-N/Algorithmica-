#include<bits/stdc++.h>
#include<functional>
using namespace std;
bool cmp(int first,int second){
    return second<first;
}
int main(){
	int a[] = {10,20,30,40,50,60};
	int n = sizeof(a)/sizeof(int);
	//sort(a,a+n,greater<int>());
	sort(a,a+n,cmp);
	for(auto x:a)cout<<x<<" "<<"\n";
}

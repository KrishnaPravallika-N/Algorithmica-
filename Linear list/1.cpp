#include<bits/stdc++.h>
using namespace std;
vector<int> getSeq(){
	vector<int>res;
	int n;
	while(true){
		cin>>n;
		if(n == 0) break;
		res.push_back(n);
	}
	return res;	
}
int main(){
	vector<int>data = getSeq();
	for(auto x:data){
		cout<<x<<"\t";
	}
	return 0;
}

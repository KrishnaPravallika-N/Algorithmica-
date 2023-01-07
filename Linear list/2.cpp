#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<string> longestWords(vector<string> inp){
	vector<string>res;
	unsigned max = 0;
	for(auto x:inp){
	    if(x.length() > max){
	        max = x.length();
	        res.clear();
	        res.push_back(x);
	    }
	    else if(x.length() == max){
	        res.push_back(x);
	    }
	}
	return res;	
}
int main(){
	vector<string>inp{"list" , "array", "record", "resign" ,"lol"};
	vector<string>res = longestWords(inp);
	for(auto x:res){
		cout<<x<<"\t";
	}
	return 0;
}

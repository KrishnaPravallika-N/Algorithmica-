#include<bits/stdc++.h>
using namespace std;
int convert(string s){
	unordered_map<char,int>value { {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500}, {'M',1000}};
	int count = 0;
	for(int i=0;i<s.length();i++){
		if(value[s[i]]<value[s[i+1]])count -= value[s[i]];
		else count += value[s[i]];
	}
	return count;
}
int main(){
	string s;
	getline(cin,s);
	cout<<convert(s);
}

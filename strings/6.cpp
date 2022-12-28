#include<bits/stdc++.h>
using namespace std;
bool isInteger(string input){
	int len = input.length(),count = 0;
	for(int i=0;i<len;i++){
		if(input[i]>=0 || input[i]<=9)count++;
	}
	for(int i=0;i<len;i++){
		if(input[i] == '+' || input[i] == '-' && count >= 1)return true;
		else return false;
	}
}
int main(){
	string inp;
	cin>>inp;
	if(isInteger(inp)) cout<<"It is a valid integer";
	else cout<<"It is not a valid integer";
}

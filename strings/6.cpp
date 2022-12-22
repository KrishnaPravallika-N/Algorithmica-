#include<bits/stdc++.h>
using namespace std;
bool isInteger(string input){
	int len = input.length();
	for(int i=0;i<len;i++){
		if(isdigit(input[i]) && len>=1){
			if(input[i] == '+' || input[i] == '-')return true;
			else return true;
		}
		else return false;
	}
}
int main(){
	string inp;
	cin>>inp;
	if(isInteger(inp)) cout<<"It is a valid integer";
	else cout<<"It is not a valid integer";
}

#include<bits/stdc++.h>
#include<cstring>
using namespace std;
string reverseWords(string input){
	int len = input.length();
	string temp = " ",result = " ";
	for(int i = 0;i<len;++i){
		if(input[i] == ' ' || input[i] == '\t'){
			result = temp + " " + result;
			temp = " ";
		}
		else temp += input[i];
	}
	return result;
}
int main(){
	string S;
	cin>>S;
	cout<<reverseWords(S);
}

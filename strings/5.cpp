#include<bits/stdc++.h>
using namespace std;
string encryptWithCaesar(string input,int key){
	int len = input.length();
	int pos;
	string result = "";
	for(int i=0;i<len;i++){
		if(input[i] >= 'a' && input[i] <= 'z'){
			pos = int(input[i]) - 'a';
			pos = (pos+key)%26;
			result += char('a' + pos);
		}
		else if(input[i] >= 'A' && input[i] <= 'Z'){
			pos = int(input[i]) - 'A';
			pos = (pos+key)%26;
			result += char('A' + pos);
		}
	}
	return result;
}
int main(){
	int key;
	string inp;
	cin>>inp>>key;
	cout<<encryptWithCaesar(inp,key);
}

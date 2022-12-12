#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,result = "";
	int k,pos;
	cin>>s>>k;
	for(int i=0;i<s.length();i++){
		if(s[i] >= 'a' && s[i] <= 'z'){
			pos = int(s[i]) - 'a';
			pos = (pos+k)%26;
			result += char('a' + pos);
		}
		else if(s[i] >= 'A' && s[i] <= 'Z'){
			pos = int(s[i]) - 'A';
			pos = (pos+k)%26;
			result += char('A' + pos);
		}
	}
	cout<<result;
}

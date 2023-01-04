#include<bits/stdc++.h>
using namespace std;
int longestPalLen(string inp){
	int size = inp.length();
	int len = 0;
	bool oddexists = false;
	int count[52] = {0};
	for(int i = 0; i<size ; i++){
		if(inp[i] >= 'a' && inp[i] <= 'z')count[inp[i] - 'a' + 6]++;
		else count[inp[i] - 'A']++;
	}
	for(int i =0;i<52;i++){
		int x = count[i];
		if(x % 2 == 0){
			len = len + x;
		}
		else{
			oddexists = true;
			if(x > 2) len += (x-1);
		}
	}
	if(oddexists)len++;
	return len;
}
int main(){
	 string x;
	 cin>>x;
	 cout<<longestPalLen(x);
}

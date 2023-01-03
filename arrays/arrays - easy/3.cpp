#include<bits/stdc++.h>
using namespace std;
int longestPalLen(string inp){
	int size = inp.length();
	int len = 0,max = 0;
	int count[26] = {0};
	for(int i = 0; i<size ; i++){
		count[inp[i] - 'a']++;
	}
	for(int i =0;i<size;i++){
		if(count[inp[i] - 'a'] % 2 == 0){
			len += count[inp[i] - 'a'];
			cout<<count[inp[i] - 'a']<<"\n";
		}
		else if(count[inp[i] - 'a'] % 2 != 0){
			if(count[inp[i] - 'a'] > max) max = count[inp[i] - 'a'];
		}
	}
	cout<<len<<"\n";
	return len+max;
}
int main(){
	 string x;
	 cin>>x;
	 cout<<longestPalLen(x);
}

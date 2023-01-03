#include<bits/stdc++.h>
using namespace std;
int longestPalLen(string inp){
	int size = inp.length();
	int len = 0,max = 0;
	int count[52] = {0};
	for(int i = 0; i<size ; i++){
		count[inp[i] - 'A']++;
	}
	for(int i =0;i<52;i++){
		int x = count[i];
		if(x % 2 == 0){
			len = len + x;
		}
		else if(count[i] % 2 != 0){
			if(count[i] > max) {
				max = count[i];	
			}
		}
	}
	return len+max;
}
int main(){
	 string x;
	 cin>>x;
	 cout<<longestPalLen(x);
}

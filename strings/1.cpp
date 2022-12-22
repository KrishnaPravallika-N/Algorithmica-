#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int removeMysteryLength(string input){
	int len = input.length();
	int temp = 0,j=1,newl;
	for(int i=len-1;i>=0;i++){
		temp = temp + input[i] * j;
		newl = len-j;
		j++;
		if(temp == newl) return newl;
	}
	return newl;
}
int main(){
    string s;
    cin>>s;
    cout<<removeMysteryLength(s);
}

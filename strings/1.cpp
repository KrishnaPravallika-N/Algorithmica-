#include<bits/stdc++.h>
#include<cstring>
using namespace std;
string removeMysteryLength(string input){
	int len = input.length();
	int temp = 0,j=1,newlen,k=1;
	string newstr = " ";
	for(int i=len-1;i>=0;i--){
		if(isdigit(input[i])){
		    temp = temp + (input[i]-'0') * k;
		    newlen = len-j;
		    j++;
		    k *= 10;
		    if(temp == newlen) newstr = input.erase(newlen,len);
		}
	}
	return newstr;
}
int main(){
    string s;
    cin>>s;
    cout<<removeMysteryLength(s);
}

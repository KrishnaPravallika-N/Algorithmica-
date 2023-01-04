#include<bits/stdc++.h>
using namespace std;
string add(string num1,string num2){
	int len1 = num1.length();
	int len2 = num2.length();
	string res = " ";
	int carry = 0;
	for(int i=len1-1,j=len2-1; i>=0 || j>=0;i--,j--){
		int d1 = i<0 ? 0 : num1[i] - '0';
		int d2 = j<0 ? 0 : num2[j] - '0';
		res =  char((d1 + d2 + carry)%10 + '0') + res;
		carry =  (d1 + d2 + carry)/10;
	}
	if(carry > 0) res = char(carry + '0') + res;
	return res;
}
int main(){
	string num1,num2;
	cin>>num1>>num2;
	cout<<add(num1,num2);
}

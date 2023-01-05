#include<bits/stdc++.h>
using namespace std;
string sub(string num1,string num2){
	int len1 = num1.length();
	int len2 = num2.length();
	string res = " ";
	int borrow = 0;
	for(int i=len1-1,j=len2-1; i>=0 || j>=0;i--,j--){
		int d1 = i<0 ? 0 : num1[i] - '0';
		int d2 = j<0 ? 0 : num2[j] - '0';
		if(d1+borrow < d2){
			int temp = d1 + borrow + 10 - d2;
			borrow = -1;
			res = char(temp + '0') + res;
		}
		else {
			int temp = d1 + borrow - d2;
			borrow = 0;
			res = char(temp + '0') + res;
		}
	}
	return res;
}
int main(){
	string num1,num2;
	cin>>num1>>num2;
	cout<<sub(num1,num2);
}

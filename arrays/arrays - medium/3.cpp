#include<bits/stdc++.h>
using namespace std;
string mul(string num1,string num2){
	int l1 = num1.length();
	int l2 = num2.length();
	int res[l1+l2] = {0};
	for(int i = l2 -1;i>=0;i--){
		for(int j=l1-1;j>=0;j--){
			int prod = (num2[i] - '0') * (num1[j] - '0');
			int sum = prod + res[i+j+1];
			res[i+j+1] = sum%10;
			res[i+j] += sum/10;
		}
	}
	string final = " ";
	for(auto e:res){
		final += to_string(e);
	}
	return final;
}
int main(){
	string num1,num2;
	cin>>num1>>num2;
	cout<<mul(num1,num2);
}

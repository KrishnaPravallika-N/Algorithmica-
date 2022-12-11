#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin>>a;
	int temp,sum = 0;
	while(a>1){
		temp = a % 10;
		sum = sum + temp;
		a = a/10;
	}
	cout<<sum;
}

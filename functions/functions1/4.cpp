#include<bits/stdc++.h>
#include<cmath>
using namespace std;
bool isPrime(int n){
	if(n<=1) return false;
	for(int i=2;i<n;i++){
		if(n%i == 0)return false;
	}
	return true;
}
int nextPrime(int n){
	while(true){
		n = n+1;
		if(isPrime(n))return n;
	}
}
int main(){
	int num;
	cin>>num;
	cout<<nextPrime(num);
}

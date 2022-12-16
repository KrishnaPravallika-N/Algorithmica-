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
	for(int i=n+1;i<n*n;i++){
		if(isPrime(i)) return i;
	}
}
int main(){
	int num;
	cin>>num;
	cout<<nextPrime(num);
}

#include<bits/stdc++.h>
using namespace std;
int anytoBaseten(int n,int base){
	int sum = 0;
	for(int i=0;i<n;i++){
		int rem = n % 10;
		sum = sum + rem * pow(base,i);
		n = n/10;	
	}
	return sum;
}
int tentoAnybase(int n,int base){
	int newbase=0,p=1,r=1;
	for(int i=0;i<n;i++){
		r = n%base;
		newbase = newbase + r;
		n = n/base;		
	}
	return newbase;
}
int convertBase(int base1,int n,int base2){
	int b = anytoBaseten(n,base1);
	int c = tentoAnybase(b,base2);
	return c;	
}
int main(){
	int b1,b2,n;
	cin>>b1>>n>>b2;
	cout<<convertBase(b1,n,b2);
}

#include<bits/stdc++.h>
#include<cstring>
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
	int sol=0,r=0,i = 1;
	while(n!=0){
	    r = n%base;
	    n = n/base;
	    sol += r * i;
	    i *= 10;
	}
	return sol;
}
int convertBase(int base1,int n,int base2){
	if(base1 == 10 && base2 >= 2 || base2 <= 16 && base2 != 10)return tentoAnybase(n,base2);
	else if(base2 == 10 && base1 >= 2 || base1 <= 16 && base1 != 10) return anytoBaseten(n,base1);
	else{
		int b = anytoBaseten(n,base1);
		int c = tentoAnybase(b,base2);
		return c;
	}	
}
int main(){
	int b1,b2,n;
	cin>>b1>>n>>b2;
	cout<<convertBase(b1,n,b2);
}

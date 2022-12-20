#include<bits/stdc++.h>
using namespace std;
double approximatePI(int n){
	double approx = 0,sign = 1,i;
	int d;
	for(i=1,d=2;i<=n;i++,d=d+2){
		approx += sign * (1.0/(d * (1.0+d) * (2.0+d))) ;
		sign *= -1;
	}
	//cout<<approx;
	return (approx*4)+ 3;
}
int main(){
	int numofapprox;
	cin>>numofapprox;
	cout<<approximatePI(numofapprox);
}

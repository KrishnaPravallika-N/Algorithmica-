#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	float guess,avg;
	double power;
	cin>>x;
	guess = x/2;
	power = pow(10,-8);
	while(abs(x - (guess*guess))>=power){
		guess = (guess + int(x)/guess)/2.0;
	}
	cout<<guess;
}

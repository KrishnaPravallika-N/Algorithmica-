#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	float guess,avg;
	double power,t;
	cin>>x;
	guess = x/2;
	t = abs(x - (guess*guess));
	power = pow(10,-12);
	while(t>power){
		guess = (guess + (x/guess))/2;
	}
	cout<<guess;
}

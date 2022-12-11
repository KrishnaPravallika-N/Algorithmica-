#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	float guess,avg,power,t;
	cin>>x;
	t = abs(x - (guess*guess));
	power = pow(10,-12);
	while(t>power){
		guess = x/2;
		guess = (guess + (x/guess))/2;
	}
	cout<<guess;
}

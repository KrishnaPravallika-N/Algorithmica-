#include<bits/stdc++.h>
using namespace std;
int main(){
	float F;
	cout<<"Celsius"<<"  Fahrenheit"<<"\n";
	for(int c=0;c<101;c+=10){
		F = (9*c + (32*5))/5;
		cout<<c<<"        "<<F<<"\n";
	} 
}


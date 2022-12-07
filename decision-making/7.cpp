#include<iostream>
using namespace std;
int main(){
	string m;
	int d;
	cin>>m>>d;
	if(m == "april" || m == "may")cout<<"Spring";
	else if(m == "july" || m == "august")cout<<"Summer";
	else if(m == "october" || m == "november")cout<<"Fall";
	else if(m == "january" || m == "february")cout<<"Winter";
	else if(m == "march"){
		if(d>=20)cout<<"Spring";
		if(d<20)cout<<"Winter";
	}
	else if(m == "june"){
		if(d>=21)cout<<"Summer";
		if(d<21)cout<<"Spring";
	}
	else if(m == "september"){
		if(d>=22)cout<<"Fall";
		if(d<22)cout<<"Summer";
	}
	else if(m == "december"){
		if(d>=21)cout<<"Winter";
		if(d<21)cout<<"Fall";
	}
}


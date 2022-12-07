#include<iostream>
using namespace std;
int main(){
	string m;
	int d;
	cin>>m>>d;
	if(m == "december"){
		if(d>=22)cout<<"Capricorn";
		if(d<22)cout<<"Sagittarius";
	}
	else if(m == "january"){
		if(d>=20)cout<<"Aquarius";
		if(d<20)cout<<"Capricorn";
	}
	else if(m == "february"){
		if(d>=19)cout<<"Pisces";
		if(d<19)cout<<"Aquarius";
	}
	else if(m == "march"){
		if(d>=21)cout<<"Aries";
		if(d<21)cout<<"Pisces";
	}
	else if(m == "april"){
		if(d>=20)cout<<"Taurus";
		if(d<20)cout<<"Aries";
	}
	else if(m == "may"){
		if(d>=21)cout<<"Gemini";
		if(d<21)cout<<"Taurus";
	}
	else if(m == "june"){
		if(d>=21)cout<<"Cancer";
		if(d<21)cout<<"Gemini";
	}
	else if(m == "july"){
		if(d>=23)cout<<"Leo";
		if(d<23)cout<<"Cancer";
	}
	else if(m == "august"){
		if(d>=23)cout<<"Virgo";
		if(d<23)cout<<"Leo";
	}
	else if(m == "september"){
		if(d>=23)cout<<"Libra";
		if(d<23)cout<<"Virgo";
	}
	else if(m == "october"){
		if(d>=23)cout<<"Scorpio";
		if(d<23)cout<<"Libra";
	}
	else if(m == "november"){
		if(d>=22)cout<<"Sagittarius";
		if(d<22)cout<<"Scorpio";
	}
}


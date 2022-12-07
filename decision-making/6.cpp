#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	if(s[0] == 'a' || s[0] == 'c' || s[0] == 'e' || s[0] == 'g'){
		if(s[1] == '1' || s[1] == '3' || s[1] == '5' || s[1] == '7')cout<<"Black";
		if(s[1] == '2' || s[1] == '4' || s[1] == '6' || s[1] == '8')cout<<"White";
	}
	else if(s[0] == 'b' || s[0] == 'd' || s[0] == 'f' || s[0] == 'h'){
		if(s[1] == '2' || s[1] == '4' || s[1] == '6' || s[1] == '8')cout<<"Black";
		if(s[1] == '1' || s[1] == '3' || s[1] == '5' || s[1] == '7')cout<<"White";
	}
	else cout<<"White";
}


#include<bits/stdc++.h>
#include<cmath>
using namespace std;
bool checkPassword(string p){
	int up=0,lo=0,di = 0;
	for(int i=0;i<p.length();i++){
		if(isupper(p[i])) up++;
		else if(islower(p[i]))lo++;
		else if(isdigit(p[i]))di++;
	}
	if(up >= 1 && lo >= 1 && di >= 1 && p.length() >= 8) return true;
	else return false;
}
int main(){
	string password;
	cin>>password;
	if(checkPassword(password)) cout<<"good";
	else cout<<"not good";
}


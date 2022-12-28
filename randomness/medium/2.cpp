#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
string getUserMove(){
	string s;
	cin>>s;
	return s;
}
string getComputerMove(){
	srand(time(0));
	int r = rand()%3 + 1;
	if(r == 1) return "rock";
	else if(r == 2) return "paper";
	else if(r == 3) return "scissor";
	return 0;
}
int getResult(){
	string u = getUserMove();
	string c = getComputerMove();
	if(u == "rock" && c == "scissors" || (u == "paper" && c == "rock") || (u == "scissors" && c == "paper")) return	1;
	else if(u == c)return -1;
	else return 0;
}

int main(){
	int cwin = 0,close=0,cdraw = 0;
	for(int i=1;i<10;i++){
		int x =getResult();
		if(x == 1)cwin++;
		if(x == 0)close++;
		else cdraw++;
	}
	cout<<cwin<<" "<<close<<" "<<cdraw;
}

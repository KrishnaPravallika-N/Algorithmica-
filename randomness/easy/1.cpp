#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
string rollDice(){
	int i,t,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0;
	t = rand()%6 + 1;
	for(int i=0;i<6;i++){
		if(t == 1)c1++;
		if(t == 2)c2++;
		if(t == 3)c3++;
		if(t == 4)c4++;
		if(t == 5)c5++;
		if(t == 6)c6++;
	}
	if(c1 == 5 || c2 == 5 || c3 == 5 || c4 == 5 || c5 == 5 || c6 == 5 ) return "Yahoo";
	else return "Try again";
}
int main(){
	cout<<rollDice();
}

#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
int diceGame(){
	int i,t,count = 0;
	srand(time(0));
	for(int i=0;i<10;i++){
		t = rand()%6 + 1;
		if(t == 6)count++;
	}
	return count;
}
int main(){
	cout<<diceGame();
}

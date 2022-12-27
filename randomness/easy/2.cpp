#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
int diceGame(){
	int i,t,count = 0;
	srand(time(0));
	t = rand()%6 + 1;
	for(int i=0;i<10;i++){
		if(t == 6)count++;
	}
	return count;
}
int main(){
	cout<<diceGame();
}

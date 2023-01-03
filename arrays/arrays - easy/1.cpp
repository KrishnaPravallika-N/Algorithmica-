#include<bits/stdc++.h>
using namespace std;
int wordScore(char inp[]){
	int score = 0,size = sizeof(inp);
	int letscore[] = {1,3,3,2,1,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
	for(int i=0;i<size;i++){
		score += letscore[inp[i] - 'A'];
	}
	return score;
}
int main(){
	int n;
	char in[n];
	cin>>n>>in;
	cout<<wordScore(in);
}

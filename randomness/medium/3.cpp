#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
int getNumOfFlips(){
	int nflips = 0;
	int prev = -1;
	while(true){
		srand(time(0));
		int current = rand() % 2;
		nflips++;
		if((prev == 1 && current == 1) || (prev == 0 && current == 0)) return nflips;
		prev == current;
	}
	return 0;
}
int main(){
	int min=1000000000,max=0,avg=0;
	for(int i=1;i<=10;i++){
		int x = getNumOfFlips();
		if(x<min)min = x;
		if(x>max)max = x;
		avg = (avg+x)/2;
	}
	cout<<min<<" "<<max<<" "<<avg;
}

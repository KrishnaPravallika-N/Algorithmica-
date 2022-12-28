#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
int getNumOfFlips(){
	int r = rand() % 2;
	int nflips = 0;
	int prev = -1;
	while(true){
		int current = rand() % 2;
		prev++;
		if((prev == 1 && current == 1) || (prev == 0 && current == 0)) return nflips;
		prev == current;
	}
	return 0;
}

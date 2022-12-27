#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
string randomLicensePlate(){
	string plate = " ";
	srand(time(0));
	int len = rand()%2 + 6;
	if(len == 6){
		for(int j = 0;j<4;j++){
			int r = rand() % 52;
            char base = (r < 26) ? 'A' : 'a';
            plate += (char) (base + r % 26);
		}
		int x = 1;
		for(int j = 3;j<6;j++){
			int num = rand() % 10;
			plate += num * x;
			x *= 10;
		}
		
	}
	else if(len == 7){
		for(int j = 0;j<4;j++){
			int r = rand() % 52;
            char base = (r < 26) ? 'A' : 'a';
            plate += (char) (base + r % 26);
		}
		int x =1;
		for(int j = 4;j<7;j++){
			int num = rand() % 10;
			plate += num*x;
			x*=10;
		}
		
	}
	return plate;
}
int main(){
	cout<<randomLicensePlate();
}

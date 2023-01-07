#include<bits/stdc++.h>
using namespace std;
string parityOfMatrix(int r, int c,vector<vector<int>>inp){
	int sumrow = 0,sumcol = 0;
	for(int row = 0;row<r;row++){
		for(int col = 0;col<c; col++){
			sumrow += inp[row][col];
		}
	}
	for(int col = 0;col<c; col++){
		for(int row = 0;row<r;row++){
			sumcol += inp[row][col];
		}
	}
	if(sumrow % 2 == 0 && sumcol % 2 == 0) return "ok";
	else return "corrupt";
}
int main(){
	int a,r,c,inp[r][c];
	vector<vector<int>> v;
	cin>>r>>c;
	for(int i=0 ; i<r ; i++) {
        vector<int> p;
        for(int j=0 ; j<c ; j++) {
            cin>>a;
            p.push_back(a);
        }
        v.push_back(p);
    }
	cout<<parityOfMatrix(r,c,inp);
}

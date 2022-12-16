#include<bits/stdc++.h>
using namespace std;
bool isCollinear(int x1,int x2,int x3,int y1,int y2,int y3){
	if((x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2)) == 0)	return true;
	else return false;
}
int main(){
	int x1,x2,x3,y1,y2,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	if(isCollinear(x1,x2,x3,y1,y2,y3)) cout<<"The points are collinear";
	else cout<<"not collinear";
}

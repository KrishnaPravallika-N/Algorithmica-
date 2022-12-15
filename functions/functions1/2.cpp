#include<bits/stdc++.h>
#include<cmath>
using namespace std;
bool isValidTriangle(float s1,float s2,float s3){
	if(s1 >= s2+s3 || s2 >= s1+s3 || s3 >= s1+s2) 
		return true;
	else 
		return false;
}
int main(){
	float s1 = 1,s2 = 10,s3 = 12;
	if(isValidTriangle(s1,s2,s3) == true) cout<<"invalid";
	else cout<<"valid";
}

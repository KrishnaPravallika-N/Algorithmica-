#include<bits/stdc++.h>
#include<cmath>
using namespace std;
float getHypotenuse(float s1,float s2){
	float c = sqrt((s1*s1) + (s2*s2));
	return c;
}
int main(){
	float s1 = 3,s2 = 4;
	cout<<getHypotenuse(s1,s2);
}

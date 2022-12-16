#include<bits/stdc++.h>
using namespace std;
int medianOfThree(int a,int b,int c){
	int x1,x2,x3;
	if(a<b && a<c) x1 = a;
	else if(b<a && b<c) x1 = a;
	else x3 = a;
	if((a<b && a>c) || (a<c && a>b)) x2 = a;
	else if((b<a && b>c) || (b<c && b>a)) x2 = b;
	else x2 = c;
	if(a>b && a>c) x3 = a;
	else if(b>a && b>c) x3 = b;
	else x3 = c;
	return x2;
}
int main(){
	int x1,x2,x3;
	cin>>x1>>x2>>x3;
	cout<<medianOfThree(x1,x2,x3);
}

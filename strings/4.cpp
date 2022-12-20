#include<bits/stdc++.h>
using namespace std;
int decode(char input){
	return int(input);
}
char encode(int input){
	return char(input);
}
int main(){
	int inp1;
	char inp2;
	cin>>inp1>>inp2;
	cout<<encode(inp1)<<" "<<decode(inp2);
}

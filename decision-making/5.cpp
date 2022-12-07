#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	if(isdigit(s[0]) && isdigit(s[1]) && isdigit(s[2]) && isdigit(s[3])) cout<<"Newer Style license plate";
	else if(isupper(s[0]) && isupper(s[1]) && isupper(s[2]) && isdigit(s[3]) && isdigit(s[4]) && isdigit(s[5])) cout<<"Older Style license plate";
	else cout<<"Invalid input";	
}

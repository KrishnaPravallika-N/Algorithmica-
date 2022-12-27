#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
string randomPassword(){
	string pwd = " ";
	srand(time(0));
	int len = rand()%(10-7) + 7;
	for(int i=0;i<len;i++){
		char c = rand() % (126-33)  + 33;
		pwd += c;
	}
	return pwd;
}
int main(){
	cout<<randomPassword();
}

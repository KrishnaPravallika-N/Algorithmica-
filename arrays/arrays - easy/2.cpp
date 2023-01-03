#include<bits/stdc++.h>
using namespace std;
//string testcase(int n){
//	string res = "";
//	srand(time(0));
//	for(int i = 0;i<n;i++){
//		res += (char)('a' + rand() % 26);
//	}
//	return res;
//}
int uniqueChar(string inp){
	int count[26] = {0};
	int size = inp.length();
	for(int i = 0; i<size ; i++){
		count[inp[i] - 'a']++;
	}
	for(int i =0;i<size;i++){
		if(count[inp[i] - 'a'] == 1) return i;
	}
	return -1;
}
int main(){
	 string x;
	 cin>>x;
	 cout<<uniqueChar(x);
}

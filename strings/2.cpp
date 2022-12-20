#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string input){
	int len = input.length();
	string reverse = "";
	for(int i = len-1; i >= 0; i--){
        reverse.push_back(input[i]);
    }
    if(input == reverse) return true;
    else return false;
}
int main(){
	string in;
	cin>>in;
	if(isPalindrome(in)) cout<<"It is a palindrome";
	else cout<<"It is not a palindrome";
}

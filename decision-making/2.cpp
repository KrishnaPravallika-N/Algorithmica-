#include<iostream>
using namespace std;
int main(){
    char s;
    cin>>s;
    if(s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u')cout<<"it is a vowel";
    else if(s == 'y') cout<<"sometimes y is a vowel & sometimes it is a consonant";
    else cout<<"it is a consonant";
}
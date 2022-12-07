#include<iostream>
using namespace std;
int main(){
	int w;
	cin>>w;
	if(w>=380 && w<450)cout<<"Violet";
	else if(w>=450 && w<495)cout<<"Blue";
	else if(w>=495 && w<570)cout<<"Green";
	else if(w>=570 && w<590)cout<<"Yellow";
	else if(w>=590 && w<620)cout<<"Orange";
	else if(w>=620 && w<750)cout<<"Red";
	else cout<<"input is outside of the visible spectrum";
}


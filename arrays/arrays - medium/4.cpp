#include<bits/stdc++.h>
using namespace std;
string* createDeck(){
	string *deck = new string[52];
	string value = "23456789TJQKA";
	string suit = "shdc";
	int i = 0;
	for(auto v: value){
		for(auto s : suit){
			string temp = "";
			temp = temp + v + s;
			deck[i++] = temp;
		}
	}
	return deck;
}
void swap(string deck[52], int i ,int j){
	string temp = deck[i];
	deck[i] = deck[j];
	deck[j] = temp;
}
void shuffle(string deck[52]){
	srand(time(0));
	for(int i = 0;i<52;i++){
		int random = rand() % 52;
		swap(deck, i, random);
	}
}
void display(string deck[52]){
	for(int i=0;i<52;i++) cout<<deck[i] <<" ";
	cout<<"\n";
}
int main(){
	int n;
	cin>>n;
	string * deck = createDeck();
	display(deck);
	shuffle(deck);
	display(deck);
	int k = 0;
	for(int i=0;i<n;i++){
		cout<<"Player"<<i+1<<" : ";
		for(int j=0;j<5;j++){
			cout<<deck[k++]<<" ";
		}
		cout<<"\n";
	}
}


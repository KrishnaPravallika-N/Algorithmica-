#include <iostream>
#include <fstream>
using namespace std;

void formatText(string in_name, string out_name,int width) {
	ifstream fin(in_name);
	ofstream fout(out_name);
	string line;
	int charcount = 0 ;
	while(getline(fin, line)) {
		if(line.find("\n")) break;
		else charcount++;
	}
	while(getline(fin,line)){
	    if(charcount <= width) fout<<line<<"\n";
	    else{
	        for(int i=0;i<=width;i++){
	            fout<<line[i];
	        }
	    }
	}
	fin.close();
	fout.close();
}
int main() {
	string in_name, out_name;
	int width;
	cin >> in_name;
	cin >> out_name;
	cin>>width;
	formatText(in_name, out_name,width);
}

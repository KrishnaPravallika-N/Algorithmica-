#include <bits/stdc++.h>
#include <fstream>
using namespace std;

void missingComments(string in_name) {
	ifstream fin(in_name);
	ofstream fout(in_name);
	string line;
	string prev = " ";
	int lineNum = 0;
	while(getline(fin, line)) {
		lineNum++;
		if((line.rfind("def",0) == 0) && prev[0] != '#'){
			string fname = line.substr(4,line.find('('));
			fout<<fname<<":"<<lineNum;	
		}
		if(line.length() == 0)prev = "";
		prev = line;
	}
	fin.close();
}
int main() {
	string in_name;
	cin >> in_name;
	missingComments(in_name);
}

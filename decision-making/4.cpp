#include<iostream>
using namespace std;
int main(){
    string m;
    cin>>m;
    if(m == "February") cout<<"28 or 29 days";
    else if(m == "January" ||m == "March" ||m == "May" ||m == "July" ||m == "August" ||m == "October" || m == "december")cout<<31;
    else cout<<30;
}
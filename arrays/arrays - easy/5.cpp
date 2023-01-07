#include<bits/stdc++.h>
#include<vector>
using namespace std;
bool isLeapYear(int year){
    return (year%400 == 0)||(year%100 != 0 && year%4 == 0);
}
int daysPassedSince1971(string date){
    int year = stoi(date.substr(0,4));
    int month = stoi(date.substr(5,2));
    int day = stoi(date.substr(8,2));
    int months[]  = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for(int i=1971;i<year;i++){
        day += isLeapYear(i) ? 366 : 365;
    }
    for(int i=0;i<month;i++){
        if(i==2 && isLeapYear(year)){
            day += 1;
        }
        day += months[i];
    }
    return day;
}        
int daysBetweenDates(string date1, string date2) {
    return abs(daysPassedSince1971(date1) - daysPassedSince1971(date2));
}
int main (){
    string d1,d2;
    cin>>d1>>d2;
    cout<<daysBetweenDates(d1,d2);
}


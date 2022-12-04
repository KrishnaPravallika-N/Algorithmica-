#include<bits/stdc++.h>
using namespace std;
int main(){
    int s;
    cin>>s;
    int dd,hh,mm;
    dd = s/86400;
    s = s % 86400;
    hh = s/3600;
    s = s % 3600;
    mm = s/60;
    s = s % 60;
    printf("%.d:%.2d:%.2d:%.2d",dd,mm,hh,s);
}
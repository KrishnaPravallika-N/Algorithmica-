#include <bits/stdc++.h>
using namespace std;
int main() {
    float cost;
    cin>>cost;
    float tax,tip;
    tax = 0.18 * cost;
    tip = 0.05 * cost;
    cout<<"tax is "<<tax<<",tip is "<<tip<<",total cost is "<<tax+tip+cost;
}
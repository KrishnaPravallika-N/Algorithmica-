#include <bits/stdc++.h>
using namespace std;
bool exists(int inp[],int size,int ele){
    for(int i=0;i<size;i++){
        if(inp[i] == ele)return true;
    }
    return false;
}
bool cmp(int first,int second){
    return second>first;
}
void randomLotteryNumbers(){
   srand(time(0));
   int size = 6;
   int arr[size];
   for(int i = 0;i<size;i++){
       int ran = 1 + rand() % 49;
       while(exists(arr,size,ran)) ran = 1 + rand() % 49;
       arr[i] = ran;
   }
   for(int x=0;x<6;x++)cout<<arr[x]<<" ";
   cout<<"\n";
   sort(arr,arr+size,cmp);
   for(int x=0;x<6;x++)cout<<arr[x]<<" ";
}
int main(){
   randomLotteryNumbers();
}

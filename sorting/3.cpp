#include <iostream>
#include <algorithm>
using namespace std;
void sortDomains(string inp[], int size){
   for (int i = 0, j = size - 1; i < j; i++, j--){
      swap(inp[i], inp[j]);
   }
}
int main(){
   string inp[] = { "cs","iitg","edu" };
   int n = sizeof(inp)/sizeof(inp[0]);
   sortDomains(inp, n);
   for (int i = 0; i < n; i++){
      cout << inp[i] << ".";
   }
}

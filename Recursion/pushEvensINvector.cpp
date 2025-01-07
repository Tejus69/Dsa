// pussing evens in veactor from array 
#include<iostream>
#include <vector>
using namespace std;


void pushEvens(int arr[],  vector<int>&even, int i){
 
  if(5 > i){
      if(arr[i] % 2 ==0){
         even.push_back(arr[i]);
      }
       pushEvens(arr,even,i+1);
  }
  
}
int main(){
  int arr[5]={11,12,13,14,15};

  vector<int>even;

  pushEvens(arr,even,0);
// printing by for each
for(int num:even)
 cout << num << " ";
    return 0;
}
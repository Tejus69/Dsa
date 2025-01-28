#include <iostream>
#include <algorithm>
using namespace std;
  
bool twoSum(int arr[], int size, int x){
    int start = 0;
    int end = size - 1;


 while(start < end){
  int sum = arr[start] + arr[end];

  if (sum == x){
 return true;
  }
  else if(sum >  x){
    end--;
  }
  else if (sum < x){
      start++;
  }
 }
    return false;

}

int main(){
int arr[] = {4,6,8,45,10,1};
int size = 6 ;
int x = 9769;
  sort(arr, arr + size);
   
   if( twoSum(arr,size,x)){
    cout << "Pair Are Present " << endl;
   }
   else{
     cout << "Pair are Not Present " << endl;
   }
    return 0;
}
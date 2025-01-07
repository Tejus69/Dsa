// find maximum number in array by recursion
#include<iostream>
#include <vector>
#include<limits.h>
using namespace std;


int maxNum(int arr[],  int size, int max, int i){
 if(i >= size){
    return max;
 } 
 if(arr[i] > max ){
     max = arr[i];
    
 }
 
 return maxNum(arr,size,max,i+1);

}
int main(){
  int arr[5]={11,12,45,14,15};

int size = 5;
int max = INT_MIN;
  
  cout << maxNum(arr,size,max,0);




    return 0;
}
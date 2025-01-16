// double every no. from array 

#include<iostream>

using namespace std;

void doubleNos(int arr[],  int size, int i){
 if(i >= size){
    return;
 } 
 // processing 
   arr[i] = arr[i] * 2;

  doubleNos(arr,size,i+1);

}
int main(){
  int arr[5]={11,12,45,14,15};

int size = 5;

 doubleNos(arr,size,0);


//printing by for each
for(int num : arr){
    cout<< num<< " ";
}


    return 0;
}
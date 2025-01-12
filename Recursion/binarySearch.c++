// Binary Search using recursion finding Target in an sorted Array

#include <iostream>

using namespace std;

int  findTarget(int arr[], int start, int end, int target)
{
   // base case 
   if(start > end ){
     return -1;
   }

   //processing
   int mid = start + (end-start/2);

   // Recursive Calls
   if(arr[mid] == target){
   return mid;
   }

   else if(arr[mid] > target){
     // going right
      return findTarget(arr, start, end-1 , target);
   }
   else if(arr[mid] < target){
    // going left
    return  findTarget(arr,mid-1, end, target);
   }

}

int main()
{

    int arr[] = {1, 2, 3, 4, 5};

    int size = 5;
    int start = 0;
    int end = size - 1;
    int target = 4;

  int ans = findTarget(arr, start, end, target);

    if(ans != -1){
    cout <<"Target is at a index :"<< ans ;
    }
     else  cout << "Target not Found";
    return 0;
}
// Binary Search using recursion finding Target in an sorted Array

#include <iostream>

using namespace std;

int  findTarget(int arr[], int start, int end, int target)
{
   // base case 
   if(start > end ){
     return -1;
   }
int mid = start + (end-start/2);
   if(arr[mid] == target){
   return mid;
   }

   else if(arr[mid] > target){
      return findTarget(arr, start, end-1 , target);
   }
   else if(arr[mid] < target){
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
    cout <<"Target is at a index :"<< findTarget(arr, start, end, target);

    return 0;
}
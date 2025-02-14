/*
   question is twoSum it is also known as keyPair Question 
   in this question we have to find a sum and match it to
   the 'x' if it matchs then return true else false. 
*/ 

// #include <iostream>
// #include <algorithm>
// using namespace std;

// bool twoSum(int arr[], int size, int x)
// {
//     int start = 0;
//     int end = size - 1;

//     while (start < end)
//     {
//         int sum = arr[start] + arr[end];

//         if (sum == x)
//         {
//             return true;
//         }
//         else if (sum > x)
//         {
//             end--;
//         }
//         else if (sum < x)
//         {
//             start++;
//         }
//     }
//     return false;
// }

// int main()
// {
//     int arr[] = {4, 6, 8, 45, 10, 1};
//     int size = 6;
//     int x = 16;
//     sort(arr, arr + size);

//     if (twoSum(arr, size, x))
//     {
//         cout << "Pair Are Present " << endl;
//     }
//     else
//     {
//         cout << "Pair are Not Present " << endl;
//     }
//     return 0;
// }


#include <iostream>
 using namespace std;
bool twoSum(int arr[] , int size , int x){
   
   
}

  int main(){
   int arr[] = {4, 6, 8, 45, 10, 1};
    int size = 6;
    int x = 16;
    twoSum(arr,size , x );

    if (twoSum(arr, size, x))
    {
        cout << "Pair Are Present " << endl;
    }
    else
    {
        cout << "Pair are Not Present " << endl;
    }
    return 0;
  }
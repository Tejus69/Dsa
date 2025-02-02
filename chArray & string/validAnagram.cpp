/*
 its also a leetcode Question
 in this ques we have string lets say ex. "rat"  then "tra", "art", etc. will be its anagram
 so anagram is the shuffling the charcters of string and put it into a random order 

 so in this ques we have a two strings lets sat String A and B we have to identify is B  string is a anagram of string A
 
 Approach 1 :
        sort both strings then match the o/p if matched then return true else flase its complexity is O(nlogn)
  
Approach 2: 
       counting the elemets of array and matching frequency table if matched the return true else False

       how to make frequency table : 
       range of ascii values are till 256 so ill create a array of size 256 then ill 
       travarse a string  and add count of characters into array index of his ascii value 
       then increase the count according to occurance of character ill apply this method on both strings
       then match the O/P
 */

#include <iostream>
#include<string>
using namespace std;

bool validAnagram(string a , string b ){

int arr[256] = {0};  // value at all indexes are defined as 0 



//  increasing count 
for(int i = 0; i < a.length(); i++){
   
   int asciiStorage = (int)a[i];
   arr[asciiStorage]++;
}

// decreasing count 
for(int i = 0; i < b.length(); i++){
   
   int asciiStorage = (int)b[i];
   arr[asciiStorage]--;
}

//checking arrays all values are zero or not 
for(int i = 0; i < 256; i++){
  if(arr[i] != 0){
    return false;
  }
}

return true; 

}

int main(){
 string a = "anagram";
 string b = "nagaram";

 if(validAnagram(a,b)){
    cout << "yes its valid Anagaram";
 }
 else{
    cout << "NO NO NO it's Not Anagram";
 }


    return 0;
}
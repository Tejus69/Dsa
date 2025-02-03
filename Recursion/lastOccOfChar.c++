/*
we have to find last occurance of givrn char in given string 
  ex: string is "abcddefg"
  char : d

  then find the last occurance of char "d" into the string 

  approach 1 : by normal search from left to right or right to left

   so we are using this approach but using recursion 
*/

#include<iostream>
#include<string>
using namespace std;

int lastOcc(string str,char key , int size){
  
  if(0 > size){
   
    return -1;
  }

  if(key == str[size]){
 return size;
  }
  return lastOcc(str,key,size-1);
}

int main(){

string str = "abcddedf";
char key = 'd';

 
 cout << "char's last occurance are present at a index:";
 cout << lastOcc(str,key,str.length()-1);
    return 0;
}
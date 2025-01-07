// question :  you hav a no. as an input print it individually by recursion
/*
  example: num = 4215 then print 4
                                 2 
                                 1
                                 5
   approach : 
   
   if 4215 % 10 then o/p will be 5 
   respectively, 421 % 10 will be 1 
   and so on...     
                   and 

     if 4215 / 10 then o/p will be 421 
   respectively, 421 / 10 will be 42
   and so on...                         
*/ 


#include<iostream>
using namespace std;

void print(int n){
  
  if(n!=0){
    int digit  = n % 10 ;
    n = n / 10 ;
   print(n);
   cout << digit << endl;
  }

}
int main(){
 int n; 
 cout <<  "Enter The Number:";
 cin >> n;

 print(n);
}
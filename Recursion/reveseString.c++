#include <iostream>

using namespace std;

// lOGIC oNE
// char printReverse(string str, int index, int end ){
    
// if(index > str.length()){
//  return 0 ;}


//   printReverse(str,index+1, end - 1);
//   cout <<  str[index];
// return str[index];
// }


// lOGIC tWO;
char printReverse(string str, int index ){
    
if(index > str.length()){
 return 0 ;}


  printReverse(str,index+1);
  cout <<  str[index];
return str[index];
}
int main(){

string str = "tejas";

printReverse(str,0);

    return 0 ;
}

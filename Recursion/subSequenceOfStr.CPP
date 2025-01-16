// ind this  question we have to find subsequences of give string 
/* example: string : abc 
then subsequences will be : a,b,c,ab,ac,bc,abc," "
if size pf string is n then no. of subsequences will be 2^n
 
 so in this ques ek pattern use hoga called include , exclude and ye pattern future me bhi bhot help karega for question solving 
*/
#include <iostream>
using namespace std;
void subSequences(string str, string output,int index){
 
// base case
 if(index >= str.length()){
   cout << "->" << output << endl;
    return ;
 }


  // exclude
  subSequences(str,output,index+1);

  // include
  output.push_back(str[index]);
  subSequences(str,output,index+1);

}

int main(){
    string  str = "abc";
    string output = "";

    subSequences(str, output, 0);


    return 0;
}



// by adding output into vector
/*
#include <iostream>
#include<vector>
using namespace std;
void subSequences(string str, string output,int index, vector<string>&ans){
 
// base case
 if(index >= str.length()){
    ans.push_back(output);
   
    return ;
 }  


  // exclude
  subSequences(str,output,index+1,ans);

  // include
  output.push_back(str[index]);
  subSequences(str,output,index+1,ans);

}

int main(){
    string  str = "abc";
    string output = "";
    vector<string>ans;
    subSequences(str, output, 0,ans);
  
 // prnting values of vector
 for(string val : ans){
 cout  << "->" << val << endl ;
 }


    return 0;
}

*/
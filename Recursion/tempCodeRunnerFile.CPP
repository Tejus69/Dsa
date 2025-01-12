#include <iostream>
#include<vector>
using namespace std;
void subSequences(string str, string output,int index, vector<string>&ans){
 
// base case
 if(index >= str.length()){
    ans.push_back(output);
    cout  << ans[0] << endl ;
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


    return 0;
}

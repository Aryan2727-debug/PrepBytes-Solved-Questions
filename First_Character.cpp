#include <bits/stdc++.h>
#include <string>
using namespace std;
int countNonRepeating(string str,int n){
  n=str.length();
  for(int i=0;i<n;i++){
    if(count(str.begin(),str.end(),str[i])==1){
      return i;
      break;
    }
  }
  return -1;
}
int main()
{
  //write your code here
  int T;
  cin>>T;
  while(T>0){
    string S;
    cin>>S;
    int ans=countNonRepeating(S,S.length());
    cout<<ans;
    cout<<endl;
    T--;
  }
  return 0;
}
#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int X;
    cin>>X;
    int sum=0;
    while(X>0){
      sum=sum+(X%10);
      X=X/10;
    }
    cout<<sum;
    return 0;
  }
#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int T;
  cin>>T;
  int N;
  int arr[T];
  for(int N=0;N<T;N++){
    cin>>arr[N];
  }
  for(int N=0;N<T;N++){
  if(arr[N]%4==0){
    if(arr[N]%100==0)
    {
        if(arr[N]%400==0)
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
  }
    }
    else{
        cout<<"Yes"<<endl;
    }
  }
  else{
    cout<<"No"<<endl;
  }
  }
  return 0;
}

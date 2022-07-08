#include <bits/stdc++.h>
using namespace std;
int returnIndex(int arr[],int n){
  for(int i=0;i<n;i++){
    if(arr[i]==1)
    return i;
  }
  return -1;
}
int main()
{
  //write your code here
  int T;
  cin>>T;
  while(T>0){
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
      cin>>arr[i];
    }
    int index = returnIndex(arr,N);
    cout<<index;
    cout<<endl;
    T--;
  }
  return 0;
}
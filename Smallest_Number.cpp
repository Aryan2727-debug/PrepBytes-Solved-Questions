#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, K; cin>>N;
  int arr[N], hash[100001] = {0};
  for(int i=0; i<N; i++){
    cin>>arr[i];
    hash[arr[i]]++;    //store the frequency of each element
  }
  cin>>K;

  //finding the smallest element having frequency k
  for(int i=0; i<100001; i++){
    if(hash[i] == K){
      cout<<i;
      break;
    }

  }
  return 0;
}

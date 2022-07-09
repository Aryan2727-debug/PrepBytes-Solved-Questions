#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int T;
  cin>>T;
  while(T>0){
    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++){
      cin>>A[i];
    }
    int counter=1;
    while(counter<N){
      for(int i=0;i<N-counter;i++){
        if(A[i]>A[i+1]){
          int temp=A[i];
          A[i]=A[i+1];
          A[i+1]=temp;
        }
      }counter++;
    }
    for(int i=0;i<N;i++){
      cout<<A[i]<<" ";
    }
    cout<<endl;
    T--;
  }
  return 0;
}
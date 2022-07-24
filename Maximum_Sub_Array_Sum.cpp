#include <bits/stdc++.h>
  using namespace std;
  int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
  
    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
  
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
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
      cout<<maxSubArraySum(arr,N);
      cout<<endl;
      T--;
    }
    return 0;
  }
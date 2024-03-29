#include <bits/stdc++.h>
  using namespace std;
  void merge(int arr[],int l,int mid,int r){
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++){
      a[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++){
      b[i]=arr[mid+1+i];
    }
    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2){
      if(a[i]<b[j]){
        arr[k]=a[i];
        k++;
        i++;
      }else{
        arr[k]=b[j];
        k++;
        j++;
      }
    }
    while(i<n1){
      arr[k]=a[i];
      k++;
      i++;
    }
    while(j<n2){
      arr[k]=b[j];
      k++;
      j++;
    }
  }
  void mergeSort(int arr[],int l,int r){
    if(l<r){
      int mid=(l+r)/2;
      mergeSort(arr,l,mid);
      mergeSort(arr,mid+1,r);
      merge(arr,l,mid,r);
    }
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
      mergeSort(arr,0,N-1);
      for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
      }
      cout<<endl;
      T--;
    }
    return 0;
  }
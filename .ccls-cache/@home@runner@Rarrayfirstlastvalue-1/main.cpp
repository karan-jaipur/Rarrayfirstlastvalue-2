#include <iostream>
using namespace std;

int main(){
 int n;
  cin>>n;
  int arr[n];
  if(n<=5){
    cout<<"Wrong input give above 5"<<endl;
  }else{
    
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }

  // int arr[8]={1,2,3,4,5,6,7};
  int size =n;
  int start=0;
  int end=size-1;
  while(true){
    if(start>end){
      break;
    }else{
  cout<<arr[start];
  cout<<arr[end];
  start++;
  end--;
    }
  }
  
  }
  }
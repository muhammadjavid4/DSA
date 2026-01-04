#include<iostream>
using namespace std;

int main(){
    
  int n;
  cout<<"enter n value : ";
  cin>>n;
  int a[n];
  cout<<"enter elements : ";
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  cout<<"Array is :";
  for(int i=0;i<n;i++){
    cout<<" "<<a[i];
  }
  cout<<endl;
//   int target;
//   cout<<"Enter target : ";
//   cin>>target;

  for(int i=1;i<n-1;i++){
    if(a[i-1]<a[i] && a[i]>a[i+1]){
        cout<<"Peak Index is : "<<i<<endl;
    }
  }



    return 0;
}
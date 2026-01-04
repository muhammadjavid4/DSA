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

  int st=1,end=n-2;

  while(st<=end){

    int mid = st + (end-st)/2;

    if(a[mid]>a[mid-1] && a[mid]>a[mid+1]){
        cout<<"peak index found at "<<mid<<endl;
        return 0;
    }
    if(a[mid]>a[mid-1]){
        st=mid+1;
    }
    else{
        end=mid-1;
    }


  }



    return 0;
}
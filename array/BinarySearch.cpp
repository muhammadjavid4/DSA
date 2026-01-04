#include<iostream>
using namespace std;

int main(){
    int n;
  cout<<"enter n value : ";
  cin>>n;
  int a[n];
  int target;
  cout<<"enter elements : ";
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  cout<<"Array is :";
  for(int i=0;i<n;i++){
    cout<<" "<<a[i];
  }
  cout<<endl;

  cout<<"enter target value : ";
  cin>>target;
  cout<<endl;

  sort(a, a+n);

  cout<<"After sorting Array is :";
  for(int i=0;i<n;i++){
    cout<<" "<<a[i];
  }
  cout<<endl;

  int st=0,end=n-1;

  while(st<=end){

//    int mid=(st+end)/2;
// more optimized to prevent from overflow 
   int mid = st + (end-st)/2;

   if(target<a[mid]){
    end=mid-1;
   }
   else if(target>a[mid]){
    st=mid+1;
   }
   else{
    cout<<"target found at : "<<mid<<" index"<<endl;
    return 0;
   }

  }


    return 0;
}
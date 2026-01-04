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
  int target;
  cout<<"Enter target : ";
  cin>>target;

  int st=0,end=n-1;
  while(st<=end){

    int mid = st + (end-st)/2;

    if(a[mid]==target){
        cout<<"Target is found at : "<<mid<<" index"<<endl;
    }

    if(a[st]<=a[mid]){
        if(a[st]<=target && target<=a[mid]){
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    else{
        if(a[mid]<=target && target<=a[end]){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
  }




    return 0;
}
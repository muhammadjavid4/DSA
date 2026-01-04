#include<iostream>
using namespace std;

int bs(int a[],int target,int st,int end){
    while(st<=end){

        int mid = st+(end-st)/2;
        if(target<a[mid]){
           return bs(a,target,st,mid-1);
        }
        else if(target>a[mid]){
           return bs(a,target,mid+1,end);
        }
        else{
            return mid;
        }

    }
}

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
//   int mid = st + (end-st)/2;

  cout<<"Target is found at index : "<<bs(a,target,st,end)<<endl;


    return 0;
}
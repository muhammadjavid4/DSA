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

  int st=0,end=n-1;
  if(n==1){
    cout<<"There is only one element in the array so final ans also : "<<a[0]<<endl;
    return 0;
  }
  while(st<=end){

    int mid = st+(end-st)/2;
     if(mid==0 && a[mid]!=a[mid+1]){ cout<<"Single element is : "<<a[mid]<<endl;return 0;}
    if(mid==n-1 && a[n-1]!=a[n-2]){ cout<<"Single element is : "<<a[mid]<<endl;return 0;}
    if(a[mid]!=a[mid-1] && a[mid]!=a[mid+1] ){
        cout<<"Single element is : "<<a[mid]<<endl;
    }
    if(mid%2 == 0){
        if(a[mid]==a[mid-1]){
        end=mid-1;
    }
     else{
        st=mid+1;
    }
    }
    else{
        if(a[mid]==a[mid-1]){
        st=mid+1;
    }
     else{
        end=mid-1;
    }
    }
    
   
}




    return 0;
}
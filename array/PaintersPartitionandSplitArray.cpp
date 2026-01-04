#include<iostream>
#include<algorithm>

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
  int b[n];
  int c=0;
  for(int i=0;i<n;i++){
    int m=0,sum1=0,sum2=0;
    int actualsum1,actualsum2;
    for(int j=0;j<=i;j++){
        sum1=sum1+a[j];
        actualsum1=sum1;
    }
    for(int k=i+1;k<n;k++){
        sum2=sum2+a[k];
        actualsum2=sum2;
    }
    int hello=max(sum1,sum2);
    b[c++]= hello;
  }
  int minVal=INT_MAX;
  for(int i=0;i<c;i++){
    minVal=min(minVal,b[i]);
  }
  cout<<minVal<<endl;

    return 0;
}
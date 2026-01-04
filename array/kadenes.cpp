#include <iostream>
using namespace std;

int main() 
{
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

  int max_sum=INT_MIN;
  int sum=0;
  for(int i=0;i<n;i++){
     sum=sum+a[i];
     if(sum>max_sum){
        max_sum=sum;
     }
     if(sum<0){
        sum=0;
     }
  }
  cout<<"max sub array sum is : "<<max_sum<<endl;


    
    return 0;
}
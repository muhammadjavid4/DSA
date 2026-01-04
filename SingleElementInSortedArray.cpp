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



// Second Method

for(int i=0;i<n;i++){
    if(i==0 && a[i]!=a[i+1]){cout<<"Single element is : "<<a[0]<<endl;}
    if(a[i]!=a[i-1] && a[i]!=a[i+1]){
        cout<<"Single element is : "<<a[i]<<endl;
        return 0;
    }
}



// First Method

//   for(int i=0;i<n;i++){
//     int count=0;
//     for(int j=0;j<n;j++){
//         if(a[i]==a[j]){
//             count++;

//         }
//     }
//     if(count==1){
//         cout<<"single element is : "<<a[i]<<endl;
//     }
//   }

    return 0;
}
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

int lh=0,rh=n-1;
int maxwater = 0;

while(rh>lh){
    int w = rh-lh;
    int height = min(a[lh],a[rh]);
    int reslut = w * height;
    maxwater = max(maxwater,reslut);
    a[lh]<a[rh] ? lh++ : rh--;
}




// bruteforce approach

//   int bigmaxwater=0;
//   for(int i=0;i<n-1;i++){
//     // int count = 1;
//     int maxwatertemp=0;
//     int maxwater=0;
//     for(int j=i+1;j<n;j++){
//         maxwatertemp = min(a[i],a[j]) * (j-i);
//         // count++;
//         maxwater=max(maxwatertemp,maxwater);
//     } 
//     bigmaxwater = max(bigmaxwater,maxwater);  
//     // cout<<"maxwater : "<<maxwater<<endl;
//   }

cout<<"Max water is : "<<maxwater<<endl;
    return 0;
}
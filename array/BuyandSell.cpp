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


int maxprofit=0,bestbuy=a[0];
for(int i=1;i<n;i++){
    if(a[i]>bestbuy){
        maxprofit = max(maxprofit,a[i]-bestbuy);
    }
    bestbuy = min(bestbuy,a[i]);
}





//bruteforce approach

//   int maxprofit = INT_MIN;
//   for(int i=0;i<n-1;i++){
//     for(int j=i+1;j<n;j++){
//         int diff = a[j]-a[i];
//         maxprofit = max(maxprofit,diff);
//     }
//   }
 
  cout<<"MAX PROFIT IS : "<<maxprofit<<endl;



    return 0;
}   
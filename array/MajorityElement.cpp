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
  int freq=0,ans=0;
  for(int i=0;i<n;i++){
        if(freq==0){
            ans = a[i];
        }
        if(ans == a[i]){
            freq++;
        }
        else{
            freq--;
        }
    
  }

  int freqq=0;
  for(int i=0;i<n;i++){
    if(ans==a[i]){
        freqq++;
    }
  }

if(freqq>(n/2)){
        cout<<"majority element is : "<<ans<<endl;
}
else{
    cout<<"No majority element found"<<endl;
}




// second approach

//   sort(a,a+n);
//   int freq=1,ans=a[0];
//   for(int i=1;i<n;i++){
//         if(a[i]==a[i-1]){
//             freq++;
//         }
//         else{
//             freq=1;
//             ans=a[i];
//         }
//         if(freq>(n/2)){
//             cout<<"majority element is : "<<a[i]<<endl;
//         }
//   }




//Brute force approach

//   for(int i=0;i<n;i++){
//     int freq=0;
//     for(int j=0;j<n;j++){
//         if(a[i]==a[j]){
//             freq++;
//             if(freq>(n/2)){
//         cout<<"majority element is : "<<a[i]<<endl;
//         return 0;
//     }
//         }
//     }
//   }




    return 0;
}
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

//   vector<int>b={};
  vector<int>b(n);

  for(int i=0;i<n;i++){
    int pos = i;
    int product = 1;
    for(int j=0;j<n;j++){
        if(i!=j){
            product = product * a[j];
        }
    }
    // b.push_back(product);
    b[i] = product;
  }

  for(auto x:b){
    cout<<x<<" ";
  }
  cout<<endl;




    return 0;
}
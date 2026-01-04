#include<iostream>
#include<algorithm>

using namespace std;

bool isPainter(int a[],int n,int mid){
    int painters = 1;
    int sum =0;
    for(int i=0;i<n;i++){
        if(a[i]>mid){
            return false;
        }
        if (sum + a[i] <= mid) {
            sum += a[i];
        }
        else {
            painters++;
            sum = a[i];
        }
    }

    return (painters <= 2);
    

}


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
  int st=0,sum=0;
  for(int i=0;i<n;i++){
    st=max(st,a[i]);
    sum=sum+a[i];
  }
  int end=sum;

  int ans;
  while(st<=end){
    int mid = st + (end-st)/2;
    if(isPainter(a,n,mid)){
        ans=mid;
        end=mid-1;
    }
    else{
        st=mid+1;
    }
  }

  cout<<"Ans is : "<<ans<<endl;

    return 0;
}
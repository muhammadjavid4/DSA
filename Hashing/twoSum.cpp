#include<iostream>
using namespace std;


int main(){     
    
    int n;
    cout<<"enter n value : ";
    cin>>n;

    int a[n];
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Array is : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    sort(a,a+n);
    cout<<"Array is : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    int target;
    cout<<"enter target : ";
    cin>>target;

    int st=0;
    int end=n-1;

    while(st<=end){
        int sum = a[st]+a[end];
        if(sum==target){
            cout<<st<<","<<end<<endl;
            return 0;
        }
        else{
            end--;
            sum=0;
        }
        // else{
        //     st++;
        //     sum=0;
        // }
    }
    cout<<"Taerget sum not found"<<endl;
    return 0;
}           
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

    cout<<"array is : ";
    for(int i=0;i<n;i++){
        cout<<" "<<a[i];
    }
    cout<<endl;

    for(int i=1;i<n;i++){
        int curr = a[i];
        int prev = i-1;
        while(prev>=0 && a[prev]>curr){
            a[prev+1]=a[prev];
            prev--;
        }
        a[prev+1] = curr;
    }

    cout<<"sorted array is : ";
    for(int i=0;i<n;i++){
        cout<<" "<<a[i];
    }
    cout<<endl;



    return 0;
}
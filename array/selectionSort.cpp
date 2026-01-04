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

    for(int i=0;i<n-1;i++){
        int si=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[si]){
                si=j;
            }
        }
        swap(a[i],a[si]);
    }

    cout<<"sorted array is : ";
    for(int i=0;i<n;i++){
        cout<<" "<<a[i];
    }
    cout<<endl;



    return 0;
}
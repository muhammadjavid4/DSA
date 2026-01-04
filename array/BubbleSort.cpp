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
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }

    cout<<"sorted array is : ";
    for(int i=0;i<n;i++){
        cout<<" "<<a[i];
    }
    cout<<endl;





    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n value : ";
    cin>>n;

    int a[n];
    cout<<"enter first array elements : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cout<<"Enter m value : ";
    cin>>m;

    int b[m];
    cout<<"enter second array elements : ";
    for(int i=0;i<m;i++){
        cin>>b[i];
    }

    cout<<"First array is : ";
    for(int i=0;i<n;i++){
        cout<<" "<<a[i];
    }
    cout<<endl;

    cout<<"Second array is : ";
    for(int i=0;i<m;i++){
        cout<<" "<<b[i];
    }
    cout<<endl;

    // Optimal solution

    int c[m+n];

    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(a[i]<a[j]){
            c[k]=a[i];
            i++;
            k++;
        }
        else{
            c[k]=b[j];
            j++;
            k++;
        }
    }

    while(i<n){
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<m){
        c[k]=b[j];
        j++;
        k++;
    }
    //bruteforce approach
    // int c[m+n];
    // for(int i=0;i<n;i++){
    //     c[i]=a[i];
    // }
    // for(int i=n;i<m+n;i++){
    //     c[i]=b[i];
    // }

    // sort(c,c+(m+n));

    cout<<"after sorting array is : ";
    for(int i=0;i<m+n;i++){
        cout<<" "<<c[i];
    }

    cout<<endl;

    return 0;
}
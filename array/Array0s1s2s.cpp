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

    // Most optimal solution

    int mid,low=0;
    int high=n-1;
    while(mid<=high){
        if(a[mid]==0){
            swap(a[low],a[mid]);
            mid++;
            low++;
        }
        else if(a[mid]==1){
            mid++;
        }
        else{
            swap(a[mid],a[high]);
            high--;
        }
    }






    // better solution     
    // int c0=0,c1=0,c2=0;

    // for(int i=0;i<n;i++){
    //     if(a[i]==0){
    //         c0++;
    //     }
    //     else if(a[i]==1){
    //         c1++;
    //     }
    //     else{
    //         c2++;
    //     }
    // }
    // int count1 = 0;
    // for(int i=0;i<n;i++){
    //     if(count1<c0){
    //         a[i]=0;
    //         count1++;
    //     }
    // }
    // int count2=0;   
    // for(int i=c0;i<n;i++){
    //     if(count2<c1){
    //         a[i]=1;
    //         count2++;
    //     }
    // }
    // int count3=0;   
    // for(int i=c0+c1;i<n;i++){
    //     if(count3<c2){
    //         a[i]=2;
    //         count3++;
    //     }
    // }

    cout<<"after sorting array is : ";
    for(int i=0;i<n;i++){
        cout<<" "<<a[i];
    }

    cout<<endl;


    return 0;
}
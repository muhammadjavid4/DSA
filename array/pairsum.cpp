#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter n value : ";
    cin >> n;
    int target;
    cout<<"enter target sum : ";
    cin>>target;
    int a[n];
    cout << "enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Array is :";
    for (int i = 0; i < n; i++)
    {
        cout << " " << a[i];
    }
    cout << endl;

    int i=0,j=n-1;
    while(i<j){
        int sum=a[i]+a[j];
        if(sum>target){
            j--;
        }
        else if(sum<target){
            i++;
        }
        else{
            cout<<i<<","<<j<<endl;
            return 0;
        }
    }










// BruteForce Approach
    // int n;
    // cout << "enter n value : ";
    // cin >> n;
    // int target;
    // cout<<"enter target sum : ";
    // cin>>target;
    // int a[n];
    // cout << "enter elements : ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    // cout << "Array is :";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << " " << a[i];
    // }
    // cout << endl;

    // for(int i=0;i<n;i++){
    //     int sum=0;
    //     for(int j=i+1;j<n;j++){
    //         sum=a[i]+a[j];
    //         if(sum==target){
    //             cout<<i<<" "<<j<<endl;
    //         }
    //     }
    // }
    // cout<<endl;


    return 0;
}
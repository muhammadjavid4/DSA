#include<iostream>
using namespace std;

void show(int &x){
    x=20;
}
void show2(int* y){
    *y=30;
}
int main(){

    int z=10;
    cout<<z<<endl;
    show(z);
    cout<<z<<endl;
    show2(&z);
    cout<<z<<endl;
    cout<<endl;
    

    int a=10;
    int* b= &a;
    int* d = b;
    int** c= &b;

    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<b<<endl;
    cout<<*b<<endl;
    cout<<&b<<endl;
    cout<<d<<endl;
    cout<<c<<endl;
    cout<<*c<<endl;
    cout<<**c<<endl;
    cout<<&c<<endl;

    int arr[]={1,2,3,4,5};
    cout<<"array addr is : "<<arr<<endl;
    cout<<"array is : "<<*arr<<endl;



    return 0;
}
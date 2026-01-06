#include<iostream>
using namespace std;

int main(){
    vector<int>bills = {5,5,5,10,20,20};
    int f=0;
    int t=0;
    int tt=0;
    for(int i=0;i<bills.size();i++){
        if(bills[i]==5){
            f++;
        }
        else if(bills[i]==10){
            if(f>=0){
                f--;
                t++;
            }
            else{
                cout<<"false"<<endl;
                return 0;
            }
        }
        else{
            if(f>0 && t>0){
                f--;
                t--;
            }
            else if(f>3){
                f = f-3;
            }
            else{
                cout<<"false"<<endl;
                return 0;
            }
        }
    }
    
    cout<<"true"<<endl;

    return 0;
}
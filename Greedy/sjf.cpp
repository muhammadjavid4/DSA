#include<iostream>
using namespace std;

int main(){
    vector<int>processes = {2,3,4,6,7,8};//burst times//2,3,4,6,7,8
    sort(processes.begin(),processes.end());    
    int totalwaitingtime = 0;
    int n = processes.size();
    for(int i=0;i<n;i++){
        int ct = 0;
        for(int j=0;j<i;j++){
            ct = ct + processes[j];
        }
        totalwaitingtime = totalwaitingtime + ct;
    }
    
    cout<<totalwaitingtime<<endl;

    return 0;
}
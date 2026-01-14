#include<iostream>
using namespace std;

int main(){

    int start[] = {1, 2, 3, 1};
    int end[]   = {2, 3, 4, 3};
    
    int n = sizeof(start)/sizeof(start[0]);

    vector<pair<int,int>>meetings;

    for(int i=0;i<n;i++){
        meetings.push_back({end[i],start[i]});
    }
    // for(auto x:meetings){
    //     cout<<x.first<<"->"<<x.second<<endl;
    // }
    sort(meetings.begin(),meetings.end()); // sort based on end time

    int count = 1;
    int LastEnd = meetings[0].first;
    
    for(int i=1;i<n;i++){
        if(meetings[i].second>=LastEnd){
            count++;
            LastEnd = meetings[i].first;
        }
    }
    int removed = n - count;
    cout<<removed<<endl;
    return 0;
}
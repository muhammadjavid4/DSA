#include<iostream>
using namespace std;

int main(){

    vector<int>g = {2,4};
    vector<int>s = {1,3,3};

    sort(g.begin(),g.end());
    sort(s.begin(),s.end());

    int i = 0;
    int j = 0;
    int count = 0;
    while(i < g.size() && j < s.size()){
        if(g[i]<=s[j]){
            count++;
            i++;
            j++;
        }
        else{
            j++;
        }
        
    }

    cout<<count<<endl;

    return 0;
}
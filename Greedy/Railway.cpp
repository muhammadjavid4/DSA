#include <iostream>
using namespace std;

int main() {
    vector<pair<int,int>> railway = {
        {900,920},{945,1200},{955,1130},
        {1100,1150},{1500,1900},{1800,2000}
    };

    vector<int>arr,dep;
    for(auto &p:railway){
        arr.push_back(p.first);
        dep.push_back(p.second);
    }

    sort(arr.begin(),arr.end());
    sort(dep.begin(),dep.end());

    int ans = 0;
    int platforms = 0;
    int i,j =0;
    int n = railway.size();
    while(i<n && j<n){
        if(arr[i]<dep[j]){
            platforms++;
            ans = max(platforms,ans);
            i++;            
        }
        else{
            platforms--;
            j--;
        }
    }

    cout << "Minimum Platforms Required: " << ans << endl;
}

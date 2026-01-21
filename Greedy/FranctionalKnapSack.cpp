// #include<iostream>
// using namespace std;

// int main(){

//     int wight = 90;
//     vector<pair<int,int>>boxes = {{60,10},{100,20},{200,50},{100,50}};
//     sort(boxes.begin(), boxes.end(), [](pair<int,int> a, pair<int,int> b) {
//         double r1 = (double)a.first / a.second;
//         double r2 = (double)b.first / b.second;
//         return r1 > r2;   // descending order
//     });

//     // for (auto &p : boxes) {
//     //     cout << p.first << " " << p.second 
//     //          << " ratio=" << (double)p.first / p.second << endl;
//     // }
//     int n = boxes.size();
//     int totalWeight = 0;
//     for(int i =0;i<n;i++){
//         while(wight>0){
//         if(boxes[i].second <= wight){
//             totalWeight = totalWeight+boxes[i].first;
//             wight = wight - boxes[i].second;
//         }
//         else{
//             totalWeight = totalWeight + wight*(boxes[i].first/boxes[i].second);
//             wight = wight - wight*(boxes[i].first/boxes[i].second);
//         }
//      }
//     }
//     cout<<totalWeight<<endl;

//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int wight = 90;
    vector<pair<int,int>> boxes = {
        {60,10},
        {100,20},
        {200,50},
        {100,50}
    };

    // sort by value/weight descending
    sort(boxes.begin(), boxes.end(), [](pair<int,int> a, pair<int,int> b) {
        return (double)a.first / a.second > (double)b.first / b.second;
    });

    double totalValue = 0;

    for(int i = 0; i < boxes.size(); i++) {

        if(wight == 0) break;

        if(boxes[i].second <= wight) {
            totalValue += boxes[i].first;
            wight -= boxes[i].second;
        }
        else {
            totalValue += boxes[i].first * ((double)wight / boxes[i].second);
            wight = 0;
        }
    }

    cout << totalValue << endl;
    return 0;
}

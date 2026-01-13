// #include<iostream>
// using namespace std;

// int main(){
//     vector<int> profit = {20, 5, 10, 40, 15, 25}; // 40 25 20 15 10 5
//     vector<int> deadline = {2, 1, 2, 1, 3, 2};    //  3  2  2  2  1 1
//     int n = profit.size();
//     int m = deadline.size();
//     sort(profit.begin(),profit.end());
//     sort(deadline.begin(),deadline.end());
//     int maxdays = 0;
//     for(int x:deadline){
//         maxdays = max(maxdays,x);
//     }
//     vector<int>totalprofit(maxdays,0);
//     // cout<<maxdays<<endl;
//     int count = 0;
//     for(int i=0;i<m;i++){
//         if(count<maxdays){
//             totalprofit[i] = profit[i];
//             count++;
//         }
//     }
//     int totalprofitnow = 0;
//     for(int x:totalprofit){
//         totalprofitnow = totalprofitnow + x;
//     }

//     cout<<totalprofitnow<<endl;

//     return 0;
// }


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> profit   = {20, 5, 10, 40, 15, 25};
    vector<int> deadline = {2, 1, 2, 1, 3, 2};

    int n = profit.size();

    // Step 1: create index array
    vector<int> idx(n);
    for (int i = 0; i < n; i++)
        idx[i] = i;

    // Step 2: sort indices by profit (descending)
    sort(idx.begin(), idx.end(), [&](int a, int b) {
        return profit[a] > profit[b];
    });

    // Step 3: find max deadline
    int maxDeadline = 0;
    for (int d : deadline)
        maxDeadline = max(maxDeadline, d);

    // Step 4: slots
    vector<int> slot(maxDeadline, -1);

    int totalProfit = 0;
    // Step 5: assign jobs
    for (int k = 0; k < n; k++) {
        int i = idx[k]; // actual job index

        for (int j = deadline[i] - 1; j >= 0; j--) {
            if (slot[j] == -1) {
                slot[j] = profit[i];
                totalProfit += profit[i];
                break;
            }
        }
    }

    cout << "Total Profit: " << totalProfit << endl;
    return 0;
}

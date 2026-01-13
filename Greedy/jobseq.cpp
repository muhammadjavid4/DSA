#include<iostream>
using namespace std;

int main(){
    vector<int> profit = {20, 5, 10, 40, 15, 25};
    vector<int> deadline = {2, 1, 2, 1, 3, 2};   
    int n = profit.size();
    vector<int>idx(n);
    for(int i=0;i<n;i++){
        idx[i] = i;
    }
    sort(idx.begin(), idx.end(), [&](int a, int b) {
    return profit[a] > profit[b];
    });

    int maxdeadline = 0;
    for(int x:deadline){
        maxdeadline = max(maxdeadline,x);
    }
    
    vector<int>slot(maxdeadline,-1);
    int totalProfit = 0;
    for (int k = 0; k < n; k++) {
    int i = idx[k];
    for (int j = deadline[i] - 1; j >= 0; j--) {
        if (slot[j] == -1) {
            slot[j] = i;
            totalProfit += profit[i];
            break;
        }
      }
   }

   cout<<totalProfit<<endl;


   return 0;
}
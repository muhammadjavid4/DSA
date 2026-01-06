#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> game = {4,0,0,2,0,0};
    int n = game.size();

    int jumps = 0;
    int currEnd = 0;
    int maxReach = 0;

    for (int i = 0; i < n - 1; i++) {
        maxReach = max(maxReach, i + game[i]);

        if (i == currEnd) {
            if (maxReach == i) {   // ⭐ IMPORTANT CHECK
                cout << "Not reachable" <<endl;
                return 0;
            }
            jumps++;
            currEnd = maxReach;
        }
    }

    cout << jumps <<endl;
    return 0;
}











// #include <iostream>
// using namespace std;

// int f(int i, vector<int>& game, int n) {
//     if (i >= n - 1) return 0;          // reached end
//     if (game[i] == 0) return 1e9;      // stuck

//     int mini = 1e9;

//     for (int jump = 1; jump <= game[i]; jump++) {
//         mini = min(mini, 1 + f(i + jump, game, n));
//     }

//     return mini;
// }

// int main() {
//     vector<int> game = {1,1,1,1,1,1,6};
//     int n = game.size();

//     int ans = f(0, game, n);

//     if (ans >= 1e9)
//         cout << "Not possible";
//     else
//         cout << ans <<endl;
    
//    return 0;
// }





//     int n = game.size();
//     int maxt = 0;
//     for(int i = 0; i < n; i++) {

//     if (i > maxt) {          // unreachable
//         cout << "lose" << endl;
    
//     return 0;
//     }

//     maxt = max(maxt, i + game[i]);

//     if (maxt >= n - 1) {     // last index reachable
//         cout << "Yes!" << endl;
//         return 0;
//     }
// }
    // int n = game.size();
    // int ans = 0;
    // for(int i=0;i<n;i++){
    //     if(game[i]==0){
    //         ans = i;
    //     }
    // }
    // // cout<<ans<<endl;
    // for(int i=0;i<n-game[ans];i++){
    //     if(game[i]>ans){
    //         cout<<"True"<<endl;
    //         return 0;
    //     }
    // }
    // cout<<"Lose"<<endl;

//     return 0;
// }
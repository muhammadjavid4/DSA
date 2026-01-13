#include <iostream>
using namespace std;

int main() {
    int start[] = {1, 3, 0, 5, 8, 5};
    int end[]   = {2, 4, 6, 7, 9, 9};
    int n = 6;

    vector<pair<int,int>> meetings;

    // Step 1: store (end, start)
    for(int i = 0; i < n; i++) {
        meetings.push_back({end[i], start[i]});
    }

    // Step 2: sort by end time
    sort(meetings.begin(), meetings.end());

    // Step 3: select first meeting
    int count = 1;
    int lastEnd = meetings[0].first;

    // Step 4: greedy selection
    for(int i = 1; i < n; i++) {
        if(meetings[i].second > lastEnd) {
            count++;
            lastEnd = meetings[i].first;
        }
    }

    cout << "Maximum meetings: " << count << endl;

    return 0;
}

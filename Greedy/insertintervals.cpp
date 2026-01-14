#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<pair<int,int>> intervals;
    intervals.push_back({1,2});
    intervals.push_back({3,4});
    intervals.push_back({9,10});
    intervals.push_back({5,9});

    // new interval
    pair<int,int> newInterval = {4,9};

    // Step 1: add new interval
    intervals.push_back(newInterval);

    // Step 2: sort intervals
    sort(intervals.begin(), intervals.end());

    vector<pair<int,int>> merged;

    int start = intervals[0].first;
    int end   = intervals[0].second;

    // Step 3: merge logic
    for (int i = 1; i < intervals.size(); i++) {

        if (intervals[i].first <= end) {
            // overlap
            end = max(end, intervals[i].second);
        } 
        else {
            // no overlap
            merged.push_back({start, end});
            start = intervals[i].first;
            end   = intervals[i].second;
        }
    }

    // Step 4: last interval
    merged.push_back({start, end});

    // Step 5: print result
    cout << "After inserting & merging:\n";
    for (int i = 0; i < merged.size(); i++) {
        cout << "{" << merged[i].first << "," 
             << merged[i].second << "}" << endl;
    }

    return 0;
}

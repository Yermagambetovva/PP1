#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int largestRectangleArea(vector<int>& heights) {
    stack<int> s;
    int max_area = 0;
    int n = heights.size();
    
    // Iterate over all bars of the histogram
    for (int i = 0; i < n; ++i) {
        // While the current bar is shorter than the bar at the stack top
        while (!s.empty() && heights[s.top()] > heights[i]) {
            int h = heights[s.top()];
            s.pop();
            int width = s.empty() ? i : i - s.top() - 1;
            max_area = max(max_area, h * width);
        }
        s.push(i);
    }
    
    // Now, process the remaining bars in the stack
    while (!s.empty()) {
        int h = heights[s.top()];
        s.pop();
        int width = s.empty() ? n : n - s.top() - 1;
        max_area = max(max_area, h * width);
    }

    return max_area;
}

int main() {
    int N;
    cin >> N;
    vector<int> heights(N);
    
    for (int i = 0; i < N; ++i) {
        cin >> heights[i];
    }

    cout << largestRectangleArea(heights) << endl;
    return 0;
}

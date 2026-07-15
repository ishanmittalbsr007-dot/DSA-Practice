#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

void print(vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void areaOfHistogram(vector<int> height) {
    int n = height.size();

    vector<int> nsl(n);
    vector<int> nsr(n);

    stack<int> s;

    // Next Smaller Left (NSL)
    nsl[0] = -1;
    s.push(0);

    for (int i = 1; i < n; i++) {
        int curr = height[i];

        while (!s.empty() && curr <= height[s.top()]) {
            s.pop();
        }

        if (s.empty()) {
            nsl[i] = -1;
        } else {
            nsl[i] = s.top();
        }

        s.push(i);
    }

    cout << "NSL: ";
    print(nsl);

    while (!s.empty()) {
        s.pop();
    }

    // Next Smaller Right (NSR)
    nsr[n - 1] = n;
    s.push(n - 1);

    for (int j = n - 2; j >= 0; j--) {
        int curr = height[j];

        while (!s.empty() && curr <= height[s.top()]) {
            s.pop();
        }

        if (s.empty()) {
            nsr[j] = n;
        } else {
            nsr[j] = s.top();
        }

        s.push(j);
    }

    cout << "NSR: ";
    print(nsr);

    // Maximum Area
    int maxArea = 0;

    for (int i = 0; i < n; i++) {
        int width = nsr[i] - nsl[i] - 1;
        int area = height[i] * width;

        cout << "Height = " << height[i]
             << ", Width = " << width
             << ", Area = " << area << endl;

        maxArea = max(maxArea, area);
    }

    cout << "\nMaximum Area of Histogram = " << maxArea << endl;
}

int main() {
    vector<int> height = {2, 1, 3, 5, 6, 2, 3};

    areaOfHistogram(height);

    return 0;
}
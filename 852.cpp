#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int min = -1;
        for(size_t i = 0; i < A.size(); ++i) {
            if(A[i] > min) {
                min = A[i];
            } else {
                return i - 1;
            }
        }
        return A.size() - 1;
    }
};

int main() {
    Solution s;
    vector<int> A = {0, 2, 1, 0};
    cout << s.peakIndexInMountainArray(A) << endl;
    return 0;
}
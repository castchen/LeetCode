#include<iostream>

using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        int res = x ^ y;
        int count = 0;
        while(res){
            if(res & 1) {
                ++count;
            }
            res >>= 1;
        }        

        return count;
    }
};

int main() {
    Solution s;
    cout << s.hammingDistance(1, 4) << endl;
    return 0;
}
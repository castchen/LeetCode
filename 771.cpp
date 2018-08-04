#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count = 0;
        for(auto c1 : J) {
            for(auto c2 : S) {
                if(c1 == c2) {
                    ++count;
                }
            }
        }        

        return count;
    }
};

int main() {
    Solution s;
    cout << s.numJewelsInStones("aA", "aAAbbbbb") << endl;
    cout << s.numJewelsInStones("z", "ZZ") << endl;
    return 0;
}
#include<iostream>

using namespace std;

class Solution {
public:
    string toLowerCase(string str) {
        for(auto &c : str) {
            if(c >= 'A' || c <= 'Z') {
                c = 'a' + c - 'A';
            }
        }

        return str;
    }
};

int main() {
    string str = "cAsT";
    Solution test;
    cout << test.toLowerCase(str) << endl;
    return 0;
}
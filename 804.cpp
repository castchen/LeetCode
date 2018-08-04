#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        vector<string> all_code;
        for(auto word : words) {
            string word_to_code;
            for(auto c : word) {
                word_to_code += morse[c - 'a'];
            }
            bool is_find = false;
            for(auto code : all_code){
                if(code == word_to_code) {
                    is_find = true;
                    break;
                }
            }
            if(!is_find) {
                all_code.push_back(word_to_code);
            }
        }
        return all_code.size();
    }
};

int main() {
    Solution s;
    vector<string> test = {"gin", "zen", "gig", "msg"};
    cout << s.uniqueMorseRepresentations(test) << endl;
    return 0;
}
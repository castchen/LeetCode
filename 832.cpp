#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(auto &image : A) {
            size_t i = 0;
            size_t j = image.size() - 1;

            int tmp = 0;
            while(i < j) {
                tmp = image[i];
                image[i] = image[j];
                image[j] = tmp;

                image[i] = image[i] ? 0 : 1;
                image[j] = image[j] ? 0 : 1;
                ++i;
                --j;
            }
            if(i == j) {
                image[i] = image[i] ? 0 : 1;
            }
        }

        return A;
    }
};

int main() {
    return 0;
}
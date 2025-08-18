//Runtime: 1ms, faster than 91.55% of C++ online submissions for Image Smoother.
class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        const int m = img.size();
        const int n = img[0].size();
        vector<vector<int>> res(m, vector<int>(n));
        int sum = 0;
        int count = 9;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                sum = 0;
                count = 9;
                for(int k = i - 1; k < i + 2; k++){
                    for(int l = j - 1; l < j + 2; l++){
                        if(k < 0 || l < 0 || k == m || l == n) {
                            count--;
                            continue;
                        }
                        sum += img[k][l];
                    }
                }T
                res[i][j] = sum/count;
            }
        }
        return res;
    }
};
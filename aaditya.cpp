class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int count = 0;
        vector<int> ans;
        
        for(int i=0; i<rectangles.size(); i++){
            if(rectangles[i][0] > rectangles[i][1]){
                ans.push_back(rectangles[i][1]);
            }
            else{
                 ans.push_back(rectangles[i][0]);
            }
        }

        int n = ans.size();
        int maximum = INT_MIN;
        for(int i=0 ; i<n; i++){
           maximum=max(maximum,ans[i]);
        }

        for(int i=0 ; i<n; i++){
            if(ans[i] == maximum)
                count++;
        }

        return count;
    }
};
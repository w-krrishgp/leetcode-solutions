class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>answer;
        long long ans=1;
        answer.push_back(1);
        for(int col=1;col<rowIndex+1;col++){
            ans=ans*(rowIndex+1-col);
            ans=ans/col;
            answer.push_back(ans);
        }
        return answer;


                    }
    };
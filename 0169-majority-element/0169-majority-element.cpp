class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el;
        int cnt=0;
        for (int i=0;i<nums.size();i++){
            if (cnt==0){
                
                cnt++;
                el=nums[i];
            }
            else if(nums[i]==el){
                cnt++;
            }
            else {
                cnt--;
            }
        }

        return el;
        
    }

};
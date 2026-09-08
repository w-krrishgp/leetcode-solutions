class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> hash(nums.size()+1,0);
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
}
for (int i=1;i<nums.size()+1;i++){
    if(hash[i]>1){
ans.push_back(i);
    }
}
for (int i=1;i<nums.size()+1;i++){
     

    if (hash[i]==0){
        ans.push_back(i);
    }
}
    



return ans;




}
};
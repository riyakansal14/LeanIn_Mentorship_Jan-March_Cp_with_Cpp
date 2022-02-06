class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int i;
        for(i=0;i<nums.size();i++)
        {
            nums[((i+1)/nums.size())+k]=nums[(i+1)/nums.size()];    
        }
    }
};


/*
In this quesion I have tried multiple times but couldnt get the right one.
Also, I know what is the problem in this algo but am not able to resolve it.
*/

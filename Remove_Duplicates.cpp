// leetCODE: https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
//  Input: nums = [0,0,1,1,1,2,2,3,3,4]
// Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
int removeDuplicates(vector<int>& nums) 
    {  int i=0, j;
        for( j=1; j<nums.size(); j++ )
        {
            if( nums[j]!=nums[i] )
            {
                nums[++i]=nums[j];
            }

        }

        return i+1;

    }

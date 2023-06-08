class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> sol;
        unordered_map<int,int> hash;
        for( int i=0; i< nums.size(); i++ )
        {
           int rem = target - nums[i];

           if( hash.find(rem) != hash.end()  )
           {
                sol.push_back( hash[rem] );
                sol.push_back(i);
                return sol;
           }

           hash[nums[i]]=i;         
            
        }
        return sol;
    }
}; 

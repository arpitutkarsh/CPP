class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        int n = spells.size();
        int m = potions.size();
        vector<int> ans;
        for(int i = 0; i<n; i++){
            int spell = spells[i];
            int start = 0;
            int end = m-1;
            while(start<=end){
                int mid = start + (end-start)/2;
                long long product = (long long)spell * (long long)potions[mid];
                if(product >= success){
                    end = mid -1;
                }
                else{
                    start = mid + 1;
                }
            }
            ans.push_back(m-end-1);
        }
        return ans;
    }
};
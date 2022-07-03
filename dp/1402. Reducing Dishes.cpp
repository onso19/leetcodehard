1402. Reducing Dishes //memory limit exceeded bcz time and ind ulta lia hua hai 

class Solution {
public:
  int helper(int time ,int ind,vector<int> v,vector <vector<int>> &dp)
    {if(ind==v.size()){
        return dp[time][ind]=0;
    }
     if(dp[time][ind]!=-1)return dp[time][ind];   
    
     return dp[time][ind]=max(time*v[ind]+helper(time+1,ind+1,v,dp),helper(time,ind+1,v,dp));
    }
    int maxSatisfaction(vector<int>& satisfaction) 
    {
      vector<vector<int>> dp (600, vector<int> (600,-1));
        sort(satisfaction.begin(),satisfaction.end());
        return helper(1,0,satisfaction,dp);
    }
};

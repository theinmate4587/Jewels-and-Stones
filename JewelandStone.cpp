class Solution {
public:
    int numJewelsInStones(string J, string S) {
     
        
        map<char,int> mp;
        
        for(int i=0;i<S.length();i++)
        {
            mp[S[i]]++;
        }
        
        
        int count=0;
        
        for(int i=0;i<J.length();i++)
        {
            if(mp.count(J[i])>0)
            {
                count+=mp[J[i]];
            }
        }
        
        
        return count;
    }
};
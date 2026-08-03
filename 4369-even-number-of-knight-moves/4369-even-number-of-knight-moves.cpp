class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        int p1=(start[0]+start[1])%2,p2=(target[0]+target[1])%2;
        return p1==p2;
    }
};
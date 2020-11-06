// Minimum Cost to Move Chips to The Same Position
class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int e=0,o=0;
        for(auto x:position){
            if(x%2==0)e++;
            else o++;
        }
        if(o==position.size()||e==position.size())return 0;
        else return min(e,o);
    }
};
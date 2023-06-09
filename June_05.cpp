//1232. Check if a straight line

// 50/79 testcases passed

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        sort(coordinates.begin(),coordinates.end());

        // Case 1: straight line parallel to y-axis
        int flag1=0;
        for(int i=0; i<coordinates.size(); i++)
        {
            int x=coordinates[0][0];
            if(coordinates[i][0]== x)
                continue;
            else
                flag1=1;
        }
        if(flag1==0)
            return true;
        

        // Case 2: straight line parallel to x-axis
        int flag2=0;
        for(int i=0; i<coordinates.size(); i++)
        {
            int y=coordinates[0][1];
            if(coordinates[i][1]==y)
                continue;
            else
                flag2=1;
        }
        if(flag2==0)
            return true;

        
        // Case 3: Inclined straight lines
        int diff1 = coordinates[1][0] - coordinates[0][0];
        int diff2 = coordinates[1][1] - coordinates[0][1];

        for(int i=1; i<coordinates.size(); i++)
        {
            if( (coordinates[i][0] - coordinates[i-1][0] == diff1) && (coordinates[i][1] - coordinates[i-1][1] == diff2) )
                continue;
            else 
                return false;
        }

        return true;
    }
};


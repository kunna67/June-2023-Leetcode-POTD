//1502. Can make arithmetic progression from sequence

//beats 100% of the solutions
// time complexity: O(NlogN) + O(n) = O(NlogN)    --> time complexity of sort function + time complexity of for loop
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
       sort(arr.begin(),arr.end()); 
       int diff=arr[1]-arr[0];
       for(int i=1; i<arr.size(); i++)
       {
           if(arr[i]-arr[i-1]==diff)
                continue;
            else
                return false;
       }
       return true;
    }
};

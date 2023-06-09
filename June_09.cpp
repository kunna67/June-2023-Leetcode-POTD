// 744. Find smallest letter greater than target



// some error while using binary search and accessing elements
// might be trying to access elements outside vector

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        // exception case
        int start = 0;
        int end = letters.size()-1;
        if(letters[end]<target)
            return letters[0];

        int mid= start+(end-start)/2;
        while(start<=end)
        {
            if(letters[mid]==target)
            {
                if(letters[mid+1]>target)
                    return letters[mid+1];
                else
                    start=mid+1;
            }

            else if(letters[mid]>target)
            {
                if(letters[mid-1]<=target)
                {
                    return letters[mid];
                }
                else
                    end=mid-1;
            }

            else
            {
                start=mid+1;
            }

            mid=start+(end-start)/2;
        }

        return 'a';
    }
};

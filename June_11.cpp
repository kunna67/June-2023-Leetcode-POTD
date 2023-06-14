// 1146. Snapshot Array

// memory limit exceeded
// 69/74 testcases passed

#include <array>
class SnapshotArray {
public:
    int sid=0;
    vector<int> arr ={0};
    vector<vector<int>> snapHis;
    SnapshotArray(int length) {
        for(int i=0; i<length; i++)
        {
            arr.push_back(0);
        }
    }
    
    void set(int index, int val) {
        arr[index]=val;
    }
    
    int snap() {
        snapHis.push_back(arr);
        return sid++;
    }
    
    int get(int index, int snap_id) {
        return snapHis[snap_id][index];
    }
};
Second Method

class SnapshotArray {
public:
  unordered_map<int, map<int, int>> mp;
    int s = 0;
    SnapshotArray(int length) {
        for(int i = 0; i < length; i++){
            map<int, int> tmp;
            tmp[0] = 0;
            mp[i] = tmp;
        }
    }

    void set(int index, int val) {
        mp[index][s] = val;
    }
    
    int snap() {
        return s++;
    }
    
    int get(int index, int snap_id) {
        auto i = mp[index].upper_bound(snap_id); 
        i--;
        return i -> second;
    }
};

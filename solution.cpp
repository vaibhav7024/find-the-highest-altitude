class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ele=0;
        ele=max(ele,gain[0]);
        for(int i=1;i<gain.size();i++){
            gain[i]=gain[i]+gain[i-1];
            ele=max(ele,gain[i]);
        }
        return ele;
    }
};

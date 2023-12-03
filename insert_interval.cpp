class Solution {
public:
   vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size(), i = 0; vector<vector<int>> res;

		//compare ending point of intervals to starting point of newInterval for case 1
        for(;i < n && intervals[i][1] < newInterval[0];i++)
            res.push_back(intervals[i]);
                          
		//case 2: overlapping case and merging of intervals
        for(;i < n && newInterval[1] >= intervals[i][0];i++){
            newInterval[0] = min(newInterval[0], intervals[i][0]);
            newInterval[1] = max(newInterval[1], intervals[i][1]);
        }
        res.push_back(newInterval);
        // case 3: no overlapping of intervals after newinterval being merged
        for(;i < n;i++)
            res.push_back(intervals[i]);
        return res;
    }
};


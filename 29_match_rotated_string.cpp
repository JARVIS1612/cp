#include<string.h>
class Solution {
public:
    bool rotateString(string s, string goal) {
        string modified_goal = goal + goal;
        return (modified_goal.find(s) != string::npos)&&(goal.length()==s.length());
    }
};
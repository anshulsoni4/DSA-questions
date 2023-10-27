class Solution {
public:
    bool rotateString(std::string s, std::string goal) {
        return (s.length() == goal.length() && (s+s).find(goal) != std::string::npos);
    }
};

class Solution {
public:
    string removeOccurrences(string s, string part) {
        int count = part.size();
        while(s.find(part) < s.size()){
            int found = s.find(part);
            s.erase(found, count);
            
        }
        return s;
    }
};
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int req = s1.size();
        int req2 = s2.size();
        sort(s1.begin(), s1.end());
        int i = 0;
        int j = req;
        while(i<req2){
            string s3 = s2.substr(i,req);
            sort(s3.begin(), s3.end());
            if(s3 == s1){
                return true;
            }

            i++;
            j++;
        }
        return false;
    }
};
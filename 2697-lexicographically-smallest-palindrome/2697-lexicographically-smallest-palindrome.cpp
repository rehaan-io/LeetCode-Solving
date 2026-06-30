class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int i =0;
        int j = s.size()-1;
        vector<char> str;
        for(int k = 0; k<s.size(); k++){
            str.push_back(s[k]);
        }
        while(i<=j){
            if(str[i] == str[j]){
                i++;
                j--;
                continue;
            }else{
                if(str[i] < str[j]){
                    str[j] = str[i];
                }else{
                    str[i] = str[j];
                }
                
                i++;
                j--;
            }
        }
        string g(str.begin(), str.end());
        return g;
    }
};
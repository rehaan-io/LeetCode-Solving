class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> str;
        for(int i =0; i<s.size(); i++){
            if(ispunct(s[i]) || isspace(s[i])){
                continue;
            }else{
                str.push_back(s[i]);
                cout<<s[i]<<endl;
            }

        }
        for(int l = 0; l<str.size(); l++){
            if(isupper(str[l])){
                str[l] = tolower(str[l]);
            }
        }
        string s1(str.begin(), str.end());
        int j = 0;
        int k = str.size()-1;
        cout<<s1;
        while(j<=k){
            swap(str[j], str[k]);
            j++;
            k--;
        }
        string s2(str.begin(), str.end());
        cout<<s2;
        if(s1==s2){
            return true;
        }else{
            return false;
        }
    }
};
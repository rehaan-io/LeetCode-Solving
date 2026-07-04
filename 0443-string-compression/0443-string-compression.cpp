class Solution {
public:
    int compress(vector<char>& chars) {
        int current_check = 0;
        int i = 1;
        int current_count = 1;
        string s;
        vector<char> chars2;
        while(i<chars.size()){
            if(chars[i] == chars[current_check]){
                current_count += 1;
                i++;
            }else{
                s.push_back(chars[current_check]);
                if(current_count != 1){
                    string a = to_string(current_count);
                    s += a;
                }
                current_check = i;
                current_count = 1;
                i++;
            }

        }
        s.push_back(chars[current_check]);
        if(current_count != 1){
            string a = to_string(current_count);
            s += a;
        }
        for(int j =0; j<s.size(); j++){
            chars2.push_back(s[j]);
        }
       
        chars = chars2;
        
        return chars.size();
    }
};
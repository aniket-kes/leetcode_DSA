class Solution {
public:
    string removeDuplicates(string s) {
        int  i = 0;
        string temp = "";
        while(i < s.length()){
            if(temp.empty() || s[i] != temp.back()){
                temp.push_back(s[i]);
            }
            else{
                temp.pop_back();
            }
            i++;
        }
        return temp;
    }
};
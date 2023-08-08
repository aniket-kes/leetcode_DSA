class Solution {
public:
    bool isVowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            return 1;
        }
        return 0;
    }
    string reverseVowels(string s) {
        int st = 0;
        int e = s.length() - 1;

        while(st <= e){
            if(isVowel(s[st]) && isVowel(s[e])){
                swap(s[st], s[e]);
                st++;
                e--;
            }
            else if(isVowel(s[st]) != true){
                st++;
            }
            else if(isVowel(s[e]) != true){
                e--;
            }
            else{
                st++;
                e--;
            }
        }
        return s;
    }
};
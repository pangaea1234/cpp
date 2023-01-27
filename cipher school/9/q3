class Solution {
public:

bool is_char(char ch){
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

string reverseOnlyLetters(string s) {
    int i = 0;
    int j = s.size()-1;

    while(i < j){
        bool ch1 = is_char(s[i]);
        bool ch2 = is_char(s[j]);
        if(ch1 && ch2){
            swap(s[i],s[j]);
            i++;
            j--;
        }else if(!ch1)i++;
        else j--;
    }

    return s;
}
};

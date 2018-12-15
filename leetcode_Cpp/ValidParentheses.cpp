class Solution {
public:
    bool isValid (string s) {
        stack<char> symbols;
        if(s.length () == 1)
            return false;
        else if(s.length () == 0)
            return true;
        else {
        symbols.push (s[0]);
        for(int i = 1; i < s.length (); i++){
            if(symbols.size () ==0 )
                symbols.push (s[i]);
            else if(symbols.top () == s[i] - 1 || symbols.top () == s[i] - 2)
               symbols.pop ();
            else symbols.push (s[i]);
        }
        if(symbols.size () == 0)
            return true;
        else return false;
        }
    }
};

class Solution {
public:
    bool isPalindrome(string s) {
        remove(s.begin(), s.end(), ' ');
        for(int i=0;i<s.size();i++)
        {
            if(s[i]<97 || s[i]>122 && s[i]!=32)
                s[i]=' ';
        }
        remove(s.begin(), s.end(), ' ');
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string rev = string(s.rbegin(),s.rend());
        if(!s.compare(rev))
            return true;
        else
            return false;
    }
};


/*NOT WORKING CORRECTLY
STRING IS REPEATING ITSELF! :<*/

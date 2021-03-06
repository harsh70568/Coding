class Solution {
public:
    string capitalizeTitle(string title) {
        int n = title.length();
        string ans = "";
        string temp = "";
        for(int i = 0; i < n; i++)
        {
            if(title[i] == ' ')
            {
                if(temp.length() > 2)
                {
                    temp[0] = temp[0]-32;
                }
                ans += temp;
                ans += " ";
                temp = "";
            }
            else
            {
                temp += tolower(title[i]);
            }
        }
        if(temp.length() > 2)
        {
            temp[0] = temp[0]-32;
        }
        ans += temp;
        return ans;
    }
};
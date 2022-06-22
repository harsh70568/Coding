// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return Largest Number

class Solution
{
    public:
    //Function to return the largest possible number of n digits
    //with sum equal to given sum.
    string largestNumber(int n, int sum)
    {
        // Your code here
        if(n*9 < sum) return "-1";
        string str(n,'0');
        
        for(int i = 0; i < n; i++)
        {
            if(sum == 0) break;
            if(sum < 9)
            {
                str[i] = sum+'0';
                sum = 0;
            }
            else
            {
                str[i] = 9+'0';
                sum -= 9;
            }
        }
        return str;
    }
};

// { Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin>>t;

	while(t--)
	{
	    //taking n and sum
		int n,sum;
		cin>>n>>sum;
		
        Solution obj;
        //function call
		cout<<obj.largestNumber(n, sum)<<endl;
	}
	return 0;
}  // } Driver Code Ends
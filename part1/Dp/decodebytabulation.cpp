// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    // Write C++ code here
    string no = "23101";
    int dp[no.length()];
    for (int i = 0; i < no.length(); i++)
    {
        dp[i] = 0;
    }
    dp[0] = 1;
    for (int i = 1; i < no.length(); i++)
    {

        if (no[i] == '0' && no[i - 1] == '0')
        {
            dp[i] = 0;
        }
        else if (no[i] != '0' && no[i - 1] == '0')
        {
            dp[i] = dp[i - 1];
        }
        else if (no[i] == '0' && no[i - 1] != '0')
        {

            if (stoi(no.substr(i - 1, 2)) <= 26)
            {
                dp[i] = dp[i - 2];
            }
            else
            {
                dp[i] = 0;
            }
        }
        else
        {
            dp[i] = dp[i - 1];

            if (stoi(no.substr(i - 1, 2)) <= 26)
            {
                dp[i] = dp[i] + i >= 2 ? dp[i - 2] : 1;
            }
        }
    }
cout<<dp[no.length()-1];
    return 0;
}
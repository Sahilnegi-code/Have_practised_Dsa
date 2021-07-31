#include <iostream>

using namespace std;
int main()
{
    int arr[] = {10, 2, 3, 1, 4, 11};
    int dp[6];
    for (int i = 0; i < 6; i++)
    {
        dp[i] = 0;
    }
    int max;
    dp[0] = arr[0];
    for (int i = 1; i <= 5; i++)
    {
        max =0;
        for (int j = 0; j < i; j++)
        {
            
            if (arr[j] < arr[i])
            {
                if (dp[j] > max)
                {
                    max = dp[j];
                }
            }
        }
        dp[i]=max+arr[i];
    }
    int maxls = dp[0];

    for(int i =0;i<6;i++){
cout<<dp[i]<<endl;
    }
    for(int i =1;i<6;i++){
if(dp[i]>maxls){
    maxls = dp[i];
}
    }
    cout<<maxls;
    return 0;
}
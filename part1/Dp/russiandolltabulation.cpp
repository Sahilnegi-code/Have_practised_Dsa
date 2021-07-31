#include <iostream>
#include <algorithm>
#include <string>
#include <utility>

#include <vector>
using namespace std;
class solution
{
public:
   static  int comp(vector<int> a, vector<int> b)
    {
        if (a[0] < b[0])
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

   int max_envelope(vector<vector<int>> &v)
    {
        sort(v.begin(), v.end(), comp);
        int dp[v.size()];

        dp[0] = 1;
        for(int i =1;i<v.size();i++){
            dp[i]=0;
        }
        for (int i = 1; i < v.size(); i++)
        {
            int max = 0;
            for (int j = 0; j < i; j++)
            {
                
                if (v[i][1] > v[j][1] && v[i][0] != v[j][0])
                {
                    if (dp[j] > max)
                    {
                        max = dp[j];
                    }

                }

            }
            dp [i]=max +1;
        }
        
        int dpmax=0;
        for(int i =0;i<v.size();i++){
            // cout<<dp[i]<<endl;
if(dp[i]>dpmax){
    dpmax =dp[i];
}
        }

return dpmax;

    }
    void print(vector<vector<int>> &v)
    {
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = 0; j < v[i].size(); j++)
            {
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
    }
};
// never do copy to vector always take reference because it take sof o(n) time complexity
// In online judges , alaways declare global arrays because 10^7 size are allowed
// first arg means aaga pehla and second uska bad ydi true otherwise peecha?
// int comparatorfun(string a, string b){
// return a.size()>b.size();
// }
// int comp(vector<int>a,vector <int> b){
// if(b[0]>a[0]){
// return 0;
// }
// return 1;

// }
int main()
{
    // // int arr[]={1,32,5,2,4,3};
    // // vector<string> str{"abc","abcd","bc","c"};
    // // sort(str.begin(),str.end(),comparatorfun);
    // // for(int i=0;i<4;i++)
    // // cout<<str[i]<<endl;

    // // vector<vector<int>> a={ {4,2}  ,{3,5}};
    // // sort(a.begin(),a.end(),comp);
    // // for(auto  i = 0;i<a.size();i++){

    // // for(int j =0;j<a[i].size();j++){
    // //     cout<<a[i][j]<<" ";
    // // }
    // // cout<<endl;
    // // }
    // //    pair<int ,string> p1;
    // //    p1={2,"sahil"};
    // // pair<int,int> array[]={{1,2},{3,4}};
    // // for(int i=0;i<2;i++){
    // //     cout<<array[i].first<<" "<<array[i].second<<endl;
    // // }

    // //    vector <int > a;
    // //    int x;
    // //    for(int i =0;i<3;i++){
    // //        cout<<a.size()<<endl;
    // //        cin>>x;
    // //        a.push_back(x);

    // //    }
    // //    for(int i =0;i<3;i++){
    // //        cout<<a.size()<<" ";
    // //   cout<<a[i]<<endl;

    // //    }

    // //    vector < pair<int ,int> > v={{1,2},{3,4},{5,6}};
    // //  v.push_back({4,6});
    // // cout<<v[3].first<<" "<<v[3].second<<endl;
    // vector<vector<int>> a;
    // int N;
    // cin>>N;
    // for(int i =0;i<N;i++){
    //     int x;
    //     cin>>x;
    //     vector<int> temp;
    //     for(int j =0;j<n;j++){
    // int n ;
    // cin>>n;
    // temp.push_back(n);
    //     }
    //     v.push(temp);
    // }

    vector<vector<int>> v = {{1, 4}, {1, 2}, {12, 9}};
    solution sol;
  cout<<  sol.max_envelope(v);
    sol.print(v);
    return 0;
}

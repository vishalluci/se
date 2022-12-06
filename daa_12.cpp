#include<bits/stdc++.h> 
using namespace std; 
#define INF 1000000009
int min_operation(vector<int> &v, int n) 
{ 
    int dp[n+1][n+1];
    memset(dp,INF,sizeof(dp));
    /*if i=j then dp[i,j]=0.*/
    for(int i=1;i<n;i++)
    {
        dp[i][i]=0;
    }
    /*Find M[i,j] using the formula.*/
    int ran;
    for(int i=2;i<n;i++) 
    { 
        for(int j=1;j<n-i+1;j++) 
        { 
            ran=i+j-1; 
            for(int k=j;k<=ran-1;k++) 
            { 
                /*formula used here.*/
                dp[j][ran]=min(dp[j][ran],dp[j][k]+dp[k+1][ran]+v[j-1]*v[k]*v[ran]); 
            } 
        } 
    }
    /*return the answer.*/
    return dp[1][n-1]; 
}
int main() 
{
    /*input values.*/
    int n;
    /*number of matrices.*/
    cin>>n;
    /*sequence/chain of the matrices if there are n matrices then chain contain n+1 numbers.*/
    vector<int> chain;
    for(int i=0;i<n+1;i++)
    {
        int x;
        cin>>x;
        chain.push_back(x);
    }
    /*store the min operation needed to multiply all the given matrices in ans.*/
    int ans=min_operation(chain,n+1);
    /*print the result.*/
    cout<<ans<<endl;
    return 0;
}

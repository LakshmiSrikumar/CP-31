#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, m;
        cin >> n >> m; 
        vector<vector<int>> a(n, vector<int>(m));

        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < m; j++) 
            {
                cin >> a[i][j];
            }
        }

        map<int, int> element_to_row;
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < m; j++) 
            {
                element_to_row[a[i][j]] = i + 1; // Store row index (1-based)
            }
        }

      
        int flag=0;
        vector<int>x;
        for(auto it:element_to_row)
        {
            x.push_back(it.second);
        }
        for(int i=0;i<x.size();i++)
        {
            if(x[i]==i+n%x.size()+1)
            {

            }
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<-1<<"\n";

        }
        else
        {
            for(int i=0;i<n;i++)
            {
                cout<<x[i]<<" ";
            }
            cout<<"\n";
        }

    }
}

int main() 
{
   
   solve();
   return 0;
}
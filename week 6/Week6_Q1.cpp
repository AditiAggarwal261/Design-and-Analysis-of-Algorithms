#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

int main()
{
    queue<int> q;
    vector<int> ans;
    int n, s, num;
    cout<<"Enter number of nodes: ";
    cin>>n;
    vector<int> vis(n, 0);
    vector<int> temp;
    vector<pair<int, vector<int>>> g;
    cout<<"Enter edges:"<<endl;
    for(int i=0; i<n; i++)
    {
        int ctr=0;
        for(int j=0; j<n; j++)
        {
            cin>>num;
            if(num==1)
            {
                temp.push_back(ctr);
            }
            ctr++;
        }
        g.push_back(make_pair(i, temp));
        temp.clear();
    }
    for(int i=0; i<n; i++)
    {
        cout<<g[i].first<<" - ";
        for(int j=0; j<g[i].second.size(); j++)
        {
            cout<<g[i].second[j]<<" ";
        }
        cout<<endl;
    }
}

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef vector<pair<int, vector<int>>> graph;
int Find(int u, int parent[])
{
    if(parent[u]<0) return u;
    return Find(parent[u], parent);
}
int Union(int u, int v, int parent[])
{
    int pu=Find(u, parent);
    int pv=Find(v, parent);
    if(pu != pv)
    {
        if(parent[pu] < parent[pv])
        {
            parent[pu] += parent[pv];
            parent[pv] = pu;
        }
        else
        {
            parent[pv] += parent[pu];
            parent[pu] = pv;
        }
    }
    else return -1;
    return 0;
}
int main()
{
    graph g;
    int s, v, ver, ctr=0, ans;
    vector<int> adjNodes;
    cout<<"Enter no of vertices: ";
    cin>>v;
    cout<<"Enter edges:"<<endl;
    for(int i=0; i<v; i++)
    {
        s=i;
        ctr=0;
        for(int j=0; j<v; j++)
        {
            cin>>ver;
            if(j<i) ver=0;
            if(ver==1)
            {
                adjNodes.push_back(ctr);
            }
            ctr++;
        }
        g.push_back(make_pair(s, adjNodes));
        adjNodes.clear();
    }
    int parent[v];
    for(int i=0; i<v; i++)
        parent[i]=-1;
    for(int i=0; i<v; i++)
    {
        for(int j=0; j<g[i].second.size(); j++)
        {
            ans=Union(g[i].first, g[i].second[j], parent);
            if(ans == -1) break;
        }
        if(ans == -1) break;
    }
    if(ans == 0) cout<<"No cycle Exists."<<endl;
    else cout<<"Cycle detected."<<endl;
}

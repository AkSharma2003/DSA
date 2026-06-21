#include<iostream>
using namespace std;
# include<vector>
# include<list>
# include<queue>

class graph{
    int v;
    list<int> *l;
    public:
    graph(int v){
        this->v=v;
        l=new list<int>[v];
    }
    void addEdge(int u,int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void dfsHelper(int u,vector<int> vis){
        cout<<u<<" ";
        vis[u]=true;
        for(int v:l[u]){
            if(!vis[v]){
                dfsHelper(v,vis);
            }
        }
    }

    void dfs(){
        vector<int> vis(v,false);
        dfsHelper(0,vis);
    }

};

int main(){
    graph g(5);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3); 
    g.addEdge(2,4); 

    g.dfs();
    return 0;
}

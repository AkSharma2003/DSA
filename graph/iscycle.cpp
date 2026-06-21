# include<iostream>
using namespace std;
# include<vector>
# include<list>

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

    bool isvailid(int src,int par,vector<bool>&v){
        v[src]=true;
        list<int>nab=l[src];
        for(int i:nab){
            if(!v[i]){
                if(isvailid(i,src,v)) return true;
            }
            else if(i!=par) return true;
        }
        return false;
    }

    bool isCycle(){
        vector<bool>vis(v,false);
        for(int i=0;i<vis.size();i++){
            if(!vis[i]){
                if(isvailid(i,-1,vis)) return true;
            }
        }
        return false;
    }
};

int main(){
    graph g(5);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,3);
    g.addEdge(2,4);

    bool ans=g.isCycle();
    if(ans) cout<<"True"<<endl;
    else cout<<"false"<<endl;

    return 0;
}
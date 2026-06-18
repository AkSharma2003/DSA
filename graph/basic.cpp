// below are types of graph
// 1. undirected and unweghted graph
// 2. unedirected and weighted graph
// 3. directed and weighted graph
// 4. directed and unweghted graph 
// 5. disconected graph


# include<iostream>
# include<vector>
# include<list>
using namespace std;

class graph{
    int v;
    list<int> *l;
    public:
    graph(int v){
        this->v=v;
        l=new list<int> [v];
    }
    void addEdge(int u,int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void printAdjList(){
        for(int i=0;i<v;i++){
            cout<<i<<":";
            for(int n:l[i]){
                cout<<n<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    graph g(5);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,3);
    g.addEdge(2,4);

    g.printAdjList();

    return 0;
}


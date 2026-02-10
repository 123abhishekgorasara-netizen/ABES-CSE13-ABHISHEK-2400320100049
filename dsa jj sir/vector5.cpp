
#include <iostream>
#include <queue>
using namespace std;

int main() {
    int N,E;
  cout<<"Enter the number of vertex";
  cin>>N;
  cout<<"Enter the numbwer of edges";
  cin>>E;
  vector<int>AdjList[E];
  for(int i=1;i<=E;i++)
  {
    int a,b;
    cout<<"Enter the end points of edge"<<i;
    cin>>a>>b;
    AdjList[a].push_back(b);
    AdjList[b].push_back(a);

  }
 for(int i=0;i<N;i++)
 {
    cout<<i<<":";
    for(int j=0;j<AdjList[i].size();j++)
       cout<<AdjList[i][j]<<",";
    cout<<"\n";

 }
    vector<int>status(N,0);
    queue<int>Q;
    Q.push(0);
    status[0]=1;
    cout<<"bfs order is: ";
    while(!Q.empty()){
        int x=Q.front();
        Q.pop();
        cout<<x<<" ,";
        for (int j=0; j<AdjList[x].size();j++){
            int y= AdjList[x][j]; 
            if(status[y]==0){
                status[y]=1;
                Q.push(y);
            }
        }
    }
}
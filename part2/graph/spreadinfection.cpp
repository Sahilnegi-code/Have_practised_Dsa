        #include<iostream>
        #include<vector>
        #include<queue>
        #include<cstring>

        using namespace std;
        void addedge(vector<int>adj[],int node,int adjacent ){
            adj[node].push_back(adjacent);
            adj[adjacent].push_back(node);
        }
        class  Pair
        {
            public:
            int time;
            int vertex;
            Pair(int t,  int v){
                time = t;
                vertex = v;

            }

        };
        signed main(){
            int vertex = 7;
            int givenTime = 3;

        vector<int > adj[vertex];
        addedge(adj,0,3);
        addedge(adj,0,1);
        addedge(adj,2,1);
        addedge(adj,2,3);
        addedge(adj,4,3);
        addedge(adj,4,5);
        addedge(adj,4,6);
        addedge(adj,5,6);
        queue<Pair> q;
        int count = 0;
        q.push(Pair(1,6));
        int visited[ vertex ];
        memset(visited,0,sizeof(visited));
        while(q.size()>0){
        Pair took = q.front();
        q.pop();
        if(took.time > givenTime){
            break;
        }
        if(visited[took.vertex] ==1){
            continue;
        }
        // mark visiting
        visited[took.vertex] =1;
        // mark visiting
        
        // Work
        count++;
        // Work

        // add
        for(auto x : adj[took.vertex]){
            if(visited[x]==0){

                q.push(Pair(took.time+1,x));

            }

        // add
        }


        } 

        cout<<count;

            return 0;
        }
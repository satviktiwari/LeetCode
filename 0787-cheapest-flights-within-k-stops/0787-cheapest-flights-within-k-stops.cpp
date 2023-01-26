class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        unordered_map<int,vector<pair<int, int>>> graph;
        for( auto f : flights )
            graph[f[0]].push_back( { f[1], f[2] } );
        
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        pq.push( { 0, src, 0 } ); // cost, vertex, hops
        
        vector<int> dist(n+1, INT_MAX); //to avoid TLE
        
        while(!pq.empty()){
            auto t = pq.top(); 
            pq.pop();
            
            int cost = t[0];
            int curr = t[1];
            int stop = t[2];
            
            if(curr == dst)
                return cost;
            
            if(dist[curr]<stop) 
                continue;
            
            dist[curr]=stop;

            if(stop > K) 
                continue;
            
            for(auto next : graph[curr])
                pq.push({cost+next.second, next.first, stop+1});
        }
        return -1;
    }
};
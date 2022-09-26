//Create DSU for all equations where operator is '==' and then 
//check if parents are not same where operator is '!='

class Solution {
public:
    vector<int> parent;
    int findParent(int i){
        if(parent[i] == -1) return i;
        return parent[i] = findParent(parent[i]);
    }
    
    void unionNode(int a, int b){
        int p1 = findParent(a);
        int p2 = findParent(b);
        if(p1 != p2) parent[p1] = p2;
    }
    
    bool equationsPossible(vector<string>& equations) {
        parent.resize(26, -1); //as all are alphabets max possible nodes can be 26
        for(auto e:equations){
            if(e[1] == '=') unionNode(e[0]-'a', e[3]-'a');
        }
        for(auto e:equations){
            if(e[1] == '!' && findParent(e[0]-'a') == findParent(e[3]-'a') ) return false;
        }
        return true;
    }
};
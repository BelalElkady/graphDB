#include <bits/stdc++.h>
using namespace std;

// TODO (what-is-graph-db): implement per the lesson description.

int main() {
    string line;
    auto numberOfEdges = 0;
     unordered_map<string, int> nodes;
    while (getline(cin, line)) {
        if (line.empty()) continue;
        stringstream ss(line);
        string word;
        while(ss>>word){
            if(word=="EDGE"){
                string from, to;
                ss>>from>>to;
                nodes[from]++;
                ++numberOfEdges;
            }else if(word=="COUNT"){
                cout<<numberOfEdges<<"\n";
            }
            else if(word=="OUT"){
                string from;
                ss>>from;
                cout<<nodes[from]<<"\n";
      
            }
        
        }
    }
    
}
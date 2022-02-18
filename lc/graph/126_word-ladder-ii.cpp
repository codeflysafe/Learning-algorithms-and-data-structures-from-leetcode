#include<vector>
#include<string>
#include<queue>
#include<unordered_map>
#include<set>
using namespace std;

class Solution {
public:
     
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        // 建立无向图
        unordered_map<string, set<string>> graph;
        unordered_map<string, set<string>> words;
        int n = wordList.size();

        int m = beginWord.size();
        for(int i = 0; i < m; i++){
            string tmp = beginWord;
            tmp[i] = '*';
            words[tmp].insert(beginWord);
        }
        
        for(string word: wordList){
            for(int i =0; i < m; i++){
                string tmp = word;
                tmp[i] = '*';
                // 无向图
                for(string w: words[tmp]){
                    if(w != word){
                        graph[w].insert(word);
                        graph[word].insert(w);
                    }
                }
                words[tmp].insert(word);
            }
        }
        unordered_map<string, vector<string>> g;
        for(auto p: graph){
            for(string key: p.second){
                g[p.first].push_back(key);
            }
        }
        vector<vector<string>> res;
        // for(auto p: graph){
        //     res.push_back(p.second);
        // }
        // return res;
        if(graph.count(endWord) == 0 || beginWord == endWord) return res;
        queue<vector<string>> q;
        q.push({beginWord});
        int sz = 1;
        set<string> vis;
        vis.insert(beginWord);
        bool ok = false;
        while(!q.empty()){
            sz = q.size();
            for(int i =0;  i < sz; i++){
                vector<string> path = q.front();
                int k = path.size();
                string key = path[k - 1];
                q.pop();
                for(string child: g[key]){
                    vector<string> tmp = path;
                    if(child == endWord){
                        tmp.push_back(child);
                        res.push_back(tmp);
                        ok = true;
                        // return res;
                    }else{
                        if(vis.count(child) == 0){
                           vis.insert(child);
                           tmp.push_back(child);
                           q.push(tmp); 
                    }
                } 
              }
            }
            if(ok) break;   
        }

        return res;

    }
};

int main(){
    Solution sc;
    string beginWord = "red", endWord = "tax";
    vector<string> wordList {"ted","tex","red","tax","tad","den","rex","pee"};
    sc.findLadders(beginWord , endWord,wordList);
    return 0;
}
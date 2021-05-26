#include "double_array_tree.h"

void DoubleArrayTree::init(){
   vector<DoubleArrayTreeNode *> t(BASE_SIZE, nullptr);
   t[0] = new DoubleArrayTreeNode(' ', BASE_ROOT);
   base = t;
   vector<int> ch(BASE_SIZE, -1);
   ch[0] = CHECK_ROOT;
   ch[1] = CHECK_NULL;
   check = ch;
}

DoubleArrayTree::DoubleArrayTree()
{
    init();
}

DoubleArrayTree::~DoubleArrayTree(){}

int  DoubleArrayTree::transferPos(int pre, char c)
{
    return abs(base[pre]->transferIndex) + code(c);
}

int
    DoubleArrayTree::code(char c)
{
    return (int)c;
}

char DoubleArrayTree::character(int idx){
    return (char)((idx - (int)('a') + 'a'));
}

void DoubleArrayTree::insert(string str){

    int i = 0, n = str.length(), pre = 0;
    while( i < n){
        char c = str[i];
        int pos = transferPos(pre,c);
        if(!base[pos]){
            base[pos] = new DoubleArrayTreeNode(c, base[pre]->transferIndex);
        }else{
            if(base[pos]->c != c){
                for (int j = pos + 1; j < BASE_SIZE; j++)
                {
                    if(!base[j]){
                        pos = j;
                        int newTransfer = pos - code(c);
                        base[pos] = new DoubleArrayTreeNode(c, newTransfer);
                        base[pre]->transferIndex = newTransfer;
                        break;
                    }
                }
            }
        }
        check[pos] = pre;
        pre = pos;
        i++;
        if( i == n){
            base[pos]->leaf = true;
            base[pos]->transferIndex *= -1;
        }
    }    
}

void DoubleArrayTree::build(vector<string> strs)
{
   for(string str: strs){
       insert(str);
   }
}

vector<DoubleArrayTreeNode *> DoubleArrayTree::find(string key){
    vector<DoubleArrayTreeNode *> ans;
    int i = 0, n = key.size(), pre = 0;
    while(i < n){
        char c = key[i];
        int pos = transferPos(pre, c);
        if(base[pos] && check[pos] == pre){
            if(base[pos]->leaf){
                ans.push_back(base[pos]);
            }
            pre = pos;
            i++;
        }
        else
            return ans;
    }
    return ans;
}

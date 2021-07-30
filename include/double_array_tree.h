#ifndef DOUBLE_ARRAY_TREE
#define DOUBLE_ARRAY_TREE
#include <map>
#include <string>
#include <vector>
#include <set>
using namespace std;

const int BASE_SIZE = 655350;
const int BASE_ROOT = 1;
const int BASE_NULL = 0;
const int CHECK_ROOT = -1;
const int CHECK_NULL = -2;

struct DoubleArrayTreeNode
{
    int transferIndex;
    bool leaf;
    char c;
    int addIdx;
    DoubleArrayTreeNode(): leaf(false){};
    DoubleArrayTreeNode(char c, int transferIndex) : c(c), leaf(false), transferIndex(transferIndex){};
};

class DoubleArrayTree{

    private:

        vector<DoubleArrayTreeNode *> base;
        vector<int> check;
        // map<char, int> dict;
        // vector<char> chars;
        void init();
        int transferPos(int pre, char c);

    public:
        DoubleArrayTree();
        ~DoubleArrayTree();
        int code(char c);
        char character(int idx);
        void build(vector<string> strs);
        void insert(string str);
        vector<DoubleArrayTreeNode *> find(string key);
};

#endif
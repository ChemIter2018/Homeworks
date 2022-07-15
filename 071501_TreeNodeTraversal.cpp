#include<iostream>
#include<vector>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Soulation
{
public:
    int size;
    void traversal(TreeNode* cur, vector<int>& vec)
    {
        if (cur == NULL) return;
        vec.push_back(cur->val);
        traversal(cur->left, vec);
        traversal(cur->right, vec);
    }
    vector<int> preorderTraversal(TreeNode* root)
    {
        vector<int> result;
        traversal(root, result);
        return result;
    }

    TreeNode* TreeNodeCreate()
    {
        TreeNode *newNode = NULL;
        int value;
        cin >> value;
        if (value < 1)
        {
            return NULL;
        }
        else
        {
            size++;
            TreeNode* newNode = new TreeNode(value);
            newNode->left = TreeNodeCreate();
            newNode->right = TreeNodeCreate();
            return newNode;
        }
    }
};

int main()
{
    Soulation *MySoulation = new Soulation();
    MySoulation->size = 0;
    TreeNode* newNode = MySoulation->TreeNodeCreate();
    vector<int> result = MySoulation->preorderTraversal(newNode);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}

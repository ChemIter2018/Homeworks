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

    void order(TreeNode* cur, vector<vector<int>>& result, int depth)
    {
        if (cur == nullptr) return;
        if (result.size() == depth) result.push_back(vector<int>());
        result[depth].push_back(cur->val);
        order(cur->left, result, depth + 1);
        order(cur->right, result, depth + 1);
    }
    vector<vector<int>> levelOrder(TreeNode* root)
    {
        vector<vector<int>> result;
        int depth = 0;
        order(root, result, depth);
        return result;
    }

    TreeNode* invertTree(TreeNode* root)
    {
        if (root == NULL) return root;
        swap(root->left, root->right);  // 中
        invertTree(root->left);         // 左
        invertTree(root->right);        // 右
        return root;
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
    cout << endl;

    vector<vector<int>> resultArray = MySoulation->levelOrder(newNode);
    for (int i = 0; i < resultArray.size(); i++)
    {
        for (int j = 0; j < resultArray[i].size(); j++)
        {
            cout << resultArray[i][j] << " ";
        }
        cout << endl;
    }

    TreeNode* swapNode = MySoulation->invertTree(newNode);
    vector<vector<int>> resultSwapNode = MySoulation->levelOrder(swapNode);
    for (int i = 0; i < resultSwapNode.size(); i++)
    {
        for (int j = 0; j < resultSwapNode[i].size(); j++)
        {
            cout << resultSwapNode[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

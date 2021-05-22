struct Node
{
    int data;
    Node *left, *right, *right_sibling;
    int level;
};
#include <vector>
using namespace std;
void build_siblings(Node *root)
{
    if (root != nullptr)
    {
        vector<Node *> v;
        v.push_back(root);
        while (v.size())
        {
            vector<Node *> v1;
            for (int i = 0; i < v.size(); i++)
            {
                v[i]->right_sibling = (i < v.size() - 1) ? v[i + 1] : nullptr;
                if (v[i]->left != nullptr)
                    v1.push_back(v[i]->left);
                if (v[i]->right != nullptr)
                    v1.push_back(v[i]->right);
            }
            v = v1;
        }
    }
}
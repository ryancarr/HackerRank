#include <iostream>
#include <cstddef>

using namespace std;	

class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            }
            else {
                Node* cur;
                if(data <= root->data){
                    cur = insert(root->left, data);
                    root->left = cur;
                }
                else{
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

		int getHeight(Node* root)
        {
            int result;

            if(!root)
            {
                // This challenge wants the depth - 1
                // because we're only interested in the branches
                // coming off of root. Not root itself
                result = -1;
            }
            else
            {
                int left = getHeight(root->left);
                int right = getHeight(root->right);

                if(left > right)
                {
                    result = left + 1;
                }
                else
                {
                    result = right + 1;
                }
            }

            return result;
        }

}; //End of Solution

int main() {
    Solution myTree;
    Node* root = NULL;
    int t;
    int data;

    cin >> t;

    while(t-- > 0){
        cin >> data;
        root = myTree.insert(root, data);
    }
    int height = myTree.getHeight(root);
    cout << height;

    return 0;
}
 void countl(Node *root,int &count)
   {
       if(root!=NULL)
       {
           if(root->left==NULL && root->right==NULL)
           {
               count++;
           }
           else
           {
               countl(root->left,count);
               countl(root->right,count);
           }
       }
   }
int countLeaves(Node* root)
{
  // Your code here
  int count=0;
  countl(root,count);
  return count;
}

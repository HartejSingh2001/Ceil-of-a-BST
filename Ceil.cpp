int findCeil(BinaryTreeNode<int> *node, int x){
    int floor=-1;
    while(node!=NULL)
    {
        if(node->data == x)
        {
            floor=node->data; return floor;
        }
        if(x>node->data)
        {
            
            node=node->right;
        }
        else
        {
            floor=node->data;
            node=node->left;
        }
    }
    return floor;
}

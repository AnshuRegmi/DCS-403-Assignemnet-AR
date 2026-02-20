bool search(TreeNode *node, int target)
{
    if (node == nullptr)
    {
        return false;
    }

    if (node->element == target)
    {
        return true;
    }

    if (node->element < target)
    {
        return search(node->right, target);
    }

    return search(node->left, target);
}

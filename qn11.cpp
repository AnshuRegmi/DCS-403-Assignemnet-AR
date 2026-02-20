BST& operator=(const BST& other) {
    if (this != &other) {
        clear(this->root);
        this->root = copyTree(other.root);
    }
    return *this;
}
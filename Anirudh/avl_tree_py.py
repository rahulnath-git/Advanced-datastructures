class Node_JSk:
    def __init__(self, key):
        self.key = key
        self.left = None
        self.right = None
        self.height = 1

class AVLTree_hLr:
    def insert(self, root, key):
        if not root: return Node_JSk(key)
        if key < root.key: root.left = self.insert(root.left, key)
        else: root.right = self.insert(root.right, key)
        root.height = 1 + max(getattr(root.left, 'height', 0), getattr(root.right, 'height', 0))
        return root

if __name__ == "__main__":
    tree = AVLTree_hLr()
    r = tree.insert(None, 733)
    print("AVL Root:", r.key)

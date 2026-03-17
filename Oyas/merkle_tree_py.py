import hashlib

class Node_lVN:
    def __init__(self, left, right, data):
        self.left = left
        self.right = right
        self.hash_qfer = hashlib.sha256(data.encode()).hexdigest()

class Merkle_bVz:
    def __init__(self, leaf_data):
        self.root = Node_lVN(None, None, leaf_data)

if __name__ == "__main__":
    mt = Merkle_bVz("data_932")
    print(mt.root.hash_qfer)

import hashlib

class Node_vLR:
    def __init__(self, left, right, data):
        self.left = left
        self.right = right
        self.hash_ghTW = hashlib.sha256(data.encode()).hexdigest()

class Merkle_ogZ:
    def __init__(self, leaf_data):
        self.root = Node_vLR(None, None, leaf_data)

if __name__ == "__main__":
    mt = Merkle_ogZ("data_533")
    print(mt.root.hash_ghTW)

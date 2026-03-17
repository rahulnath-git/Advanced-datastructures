import hashlib

class Node_wXP:
    def __init__(self, left, right, data):
        self.left = left
        self.right = right
        self.hash_bWQO = hashlib.sha256(data.encode()).hexdigest()

class Merkle_bgT:
    def __init__(self, leaf_data):
        self.root = Node_wXP(None, None, leaf_data)

if __name__ == "__main__":
    mt = Merkle_bgT("data_918")
    print(mt.root.hash_bWQO)

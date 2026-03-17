import hashlib

class Node_kzd:
    def __init__(self, left, right, data):
        self.left = left
        self.right = right
        self.hash_GrKl = hashlib.sha256(data.encode()).hexdigest()

class Merkle_rON:
    def __init__(self, leaf_data):
        self.root = Node_kzd(None, None, leaf_data)

if __name__ == "__main__":
    mt = Merkle_rON("data_213")
    print(mt.root.hash_GrKl)

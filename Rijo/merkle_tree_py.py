import hashlib

class Node_MED:
    def __init__(self, left, right, data):
        self.left = left
        self.right = right
        self.hash_XWHO = hashlib.sha256(data.encode()).hexdigest()

class Merkle_JRc:
    def __init__(self, leaf_data):
        self.root = Node_MED(None, None, leaf_data)

if __name__ == "__main__":
    mt = Merkle_JRc("data_1000")
    print(mt.root.hash_XWHO)

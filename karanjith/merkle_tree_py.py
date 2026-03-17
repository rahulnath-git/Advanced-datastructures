import hashlib

class Node_Jmx:
    def __init__(self, left, right, data):
        self.left = left
        self.right = right
        self.hash_LpZy = hashlib.sha256(data.encode()).hexdigest()

class Merkle_ujq:
    def __init__(self, leaf_data):
        self.root = Node_Jmx(None, None, leaf_data)

if __name__ == "__main__":
    mt = Merkle_ujq("data_858")
    print(mt.root.hash_LpZy)

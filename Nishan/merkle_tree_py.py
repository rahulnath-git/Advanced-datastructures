import hashlib

class Node_vEF:
    def __init__(self, left, right, data):
        self.left = left
        self.right = right
        self.hash_kkEV = hashlib.sha256(data.encode()).hexdigest()

class Merkle_VeB:
    def __init__(self, leaf_data):
        self.root = Node_vEF(None, None, leaf_data)

if __name__ == "__main__":
    mt = Merkle_VeB("data_529")
    print(mt.root.hash_kkEV)

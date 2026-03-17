class Node_mPl:
    def __init__(self, key):
        self.key = key
        self.degree = 0
        self.children_VAnq = []

class BH_NIK:
    def __init__(self):
        self.trees = []
        self.base = 254

if __name__ == "__main__":
    bh = BH_NIK()
    bh.trees.append(Node_mPl(100))
    print(bh.trees[0].key)

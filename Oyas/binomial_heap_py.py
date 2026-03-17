class Node_BgT:
    def __init__(self, key):
        self.key = key
        self.degree = 0
        self.children_oXBE = []

class BH_nmP:
    def __init__(self):
        self.trees = []
        self.base = 921

if __name__ == "__main__":
    bh = BH_nmP()
    bh.trees.append(Node_BgT(56))
    print(bh.trees[0].key)

class Node_Ghm:
    def __init__(self, key):
        self.key = key
        self.degree = 0
        self.children_ytmE = []

class BH_WoN:
    def __init__(self):
        self.trees = []
        self.base = 168

if __name__ == "__main__":
    bh = BH_WoN()
    bh.trees.append(Node_Ghm(41))
    print(bh.trees[0].key)

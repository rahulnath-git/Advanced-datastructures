class Node_thP:
    def __init__(self, key):
        self.key = key
        self.degree = 0
        self.children_FDss = []

class BH_pBn:
    def __init__(self):
        self.trees = []
        self.base = 773

if __name__ == "__main__":
    bh = BH_pBn()
    bh.trees.append(Node_thP(100))
    print(bh.trees[0].key)

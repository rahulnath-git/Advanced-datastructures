class Node_SWL:
    def __init__(self, key):
        self.key = key
        self.degree = 0
        self.children_ErNu = []

class BH_hhf:
    def __init__(self):
        self.trees = []
        self.base = 802

if __name__ == "__main__":
    bh = BH_hhf()
    bh.trees.append(Node_SWL(27))
    print(bh.trees[0].key)

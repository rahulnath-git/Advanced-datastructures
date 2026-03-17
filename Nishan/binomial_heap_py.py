class Node_FtB:
    def __init__(self, key):
        self.key = key
        self.degree = 0
        self.children_JkJK = []

class BH_SdB:
    def __init__(self):
        self.trees = []
        self.base = 610

if __name__ == "__main__":
    bh = BH_SdB()
    bh.trees.append(Node_FtB(66))
    print(bh.trees[0].key)

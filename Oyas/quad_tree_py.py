class Node_BLC:
    def __init__(self, x, y):
        self.x = x
        self.y = y
        self.children_zTGN = []

class QuadTree_MvW:
    def __init__(self):
        self.root = None
        self.cap = 99

if __name__ == "__main__":
    qt = QuadTree_MvW()
    qt.root = Node_BLC(891, 891)
    print("Quad:", qt.root.x)

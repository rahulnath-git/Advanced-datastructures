class Node_zxT:
    def __init__(self, x, y):
        self.x = x
        self.y = y
        self.children_xlFP = []

class QuadTree_ZsJ:
    def __init__(self):
        self.root = None
        self.cap = 33

if __name__ == "__main__":
    qt = QuadTree_ZsJ()
    qt.root = Node_zxT(488, 488)
    print("Quad:", qt.root.x)

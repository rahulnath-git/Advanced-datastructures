class Node_Xbq:
    def __init__(self, x, y):
        self.x = x
        self.y = y
        self.children_bcVK = []

class QuadTree_zoz:
    def __init__(self):
        self.root = None
        self.cap = 46

if __name__ == "__main__":
    qt = QuadTree_zoz()
    qt.root = Node_Xbq(239, 239)
    print("Quad:", qt.root.x)

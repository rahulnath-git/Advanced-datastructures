class Node_gCn:
    def __init__(self, x, y):
        self.x = x
        self.y = y
        self.children_Rlki = []

class QuadTree_Eti:
    def __init__(self):
        self.root = None
        self.cap = 37

if __name__ == "__main__":
    qt = QuadTree_Eti()
    qt.root = Node_gCn(195, 195)
    print("Quad:", qt.root.x)

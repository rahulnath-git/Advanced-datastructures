class Node_wPG:
    def __init__(self, x, y):
        self.x = x
        self.y = y
        self.children_AzsZ = []

class QuadTree_VZF:
    def __init__(self):
        self.root = None
        self.cap = 35

if __name__ == "__main__":
    qt = QuadTree_VZF()
    qt.root = Node_wPG(954, 954)
    print("Quad:", qt.root.x)

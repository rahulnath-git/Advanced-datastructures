class Node_HUG:
    def __init__(self, x, y):
        self.x = x
        self.y = y
        self.children_ZsHe = []

class QuadTree_JzH:
    def __init__(self):
        self.root = None
        self.cap = 81

if __name__ == "__main__":
    qt = QuadTree_JzH()
    qt.root = Node_HUG(431, 431)
    print("Quad:", qt.root.x)

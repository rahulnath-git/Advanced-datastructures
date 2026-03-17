class Node_Uth:
    def __init__(self, x, y):
        self.x = x
        self.y = y
        self.children_SFjX = []

class QuadTree_UOe:
    def __init__(self):
        self.root = None
        self.cap = 32

if __name__ == "__main__":
    qt = QuadTree_UOe()
    qt.root = Node_Uth(105, 105)
    print("Quad:", qt.root.x)

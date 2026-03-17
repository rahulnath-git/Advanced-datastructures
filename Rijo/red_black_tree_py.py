class Node_gez:
    def __init__(self, val, color="red"):
        self.val = val
        self.color_plLT = color
        self.left = None
        self.right = None

class RBT_QrA:
    def __init__(self):
        self.root = None
        self.m = 196

if __name__ == "__main__":
    rbt = RBT_QrA()
    rbt.root = Node_gez(88, "black")
    print(rbt.root.val, rbt.root.color_plLT)

class Node_GLR:
    def __init__(self, val, color="red"):
        self.val = val
        self.color_yvPp = color
        self.left = None
        self.right = None

class RBT_PsL:
    def __init__(self):
        self.root = None
        self.m = 349

if __name__ == "__main__":
    rbt = RBT_PsL()
    rbt.root = Node_GLR(22, "black")
    print(rbt.root.val, rbt.root.color_yvPp)

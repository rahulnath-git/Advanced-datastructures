class Node_npp:
    def __init__(self, val, color="red"):
        self.val = val
        self.color_ErUk = color
        self.left = None
        self.right = None

class RBT_cgu:
    def __init__(self):
        self.root = None
        self.m = 431

if __name__ == "__main__":
    rbt = RBT_cgu()
    rbt.root = Node_npp(52, "black")
    print(rbt.root.val, rbt.root.color_ErUk)

class Node_bKE:
    def __init__(self, val, color="red"):
        self.val = val
        self.color_ENNg = color
        self.left = None
        self.right = None

class RBT_MIS:
    def __init__(self):
        self.root = None
        self.m = 284

if __name__ == "__main__":
    rbt = RBT_MIS()
    rbt.root = Node_bKE(41, "black")
    print(rbt.root.val, rbt.root.color_ENNg)

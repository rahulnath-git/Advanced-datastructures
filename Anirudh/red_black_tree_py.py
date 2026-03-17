class Node_HEG:
    def __init__(self, val, color="red"):
        self.val = val
        self.color_fPEn = color
        self.left = None
        self.right = None

class RBT_mOY:
    def __init__(self):
        self.root = None
        self.m = 450

if __name__ == "__main__":
    rbt = RBT_mOY()
    rbt.root = Node_HEG(74, "black")
    print(rbt.root.val, rbt.root.color_fPEn)

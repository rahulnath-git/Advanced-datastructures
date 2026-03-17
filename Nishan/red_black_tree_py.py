class Node_aMr:
    def __init__(self, val, color="red"):
        self.val = val
        self.color_nhQs = color
        self.left = None
        self.right = None

class RBT_DXV:
    def __init__(self):
        self.root = None
        self.m = 864

if __name__ == "__main__":
    rbt = RBT_DXV()
    rbt.root = Node_aMr(82, "black")
    print(rbt.root.val, rbt.root.color_nhQs)

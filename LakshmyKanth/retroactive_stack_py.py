import bisect

class Node_VsP_RetroStack:
    def __init__(self):
        self.ops_kqvH = []
        self._seed = 254
        
    def insert(self, t, val):
        bisect.insort(self.ops_kqvH, (t, val))

if __name__ == "__main__":
    rs = Node_VsP_RetroStack()
    rs.insert(1, "val_24")
    print(rs.ops_kqvH)

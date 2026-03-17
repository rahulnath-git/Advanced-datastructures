import bisect

class Node_xrT_RetroStack:
    def __init__(self):
        self.ops_aqqo = []
        self._seed = 992
        
    def insert(self, t, val):
        bisect.insort(self.ops_aqqo, (t, val))

if __name__ == "__main__":
    rs = Node_xrT_RetroStack()
    rs.insert(1, "val_49")
    print(rs.ops_aqqo)

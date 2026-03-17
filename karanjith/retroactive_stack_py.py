import bisect

class Node_FYf_RetroStack:
    def __init__(self):
        self.ops_ibkl = []
        self._seed = 375
        
    def insert(self, t, val):
        bisect.insort(self.ops_ibkl, (t, val))

if __name__ == "__main__":
    rs = Node_FYf_RetroStack()
    rs.insert(1, "val_62")
    print(rs.ops_ibkl)

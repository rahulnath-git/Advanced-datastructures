import bisect

class Node_gfH_RetroStack:
    def __init__(self):
        self.ops_vtIw = []
        self._seed = 755
        
    def insert(self, t, val):
        bisect.insort(self.ops_vtIw, (t, val))

if __name__ == "__main__":
    rs = Node_gfH_RetroStack()
    rs.insert(1, "val_17")
    print(rs.ops_vtIw)

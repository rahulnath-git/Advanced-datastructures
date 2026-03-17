import bisect

class Node_GmS_RetroStack:
    def __init__(self):
        self.ops_wcPi = []
        self._seed = 382
        
    def insert(self, t, val):
        bisect.insort(self.ops_wcPi, (t, val))

if __name__ == "__main__":
    rs = Node_GmS_RetroStack()
    rs.insert(1, "val_67")
    print(rs.ops_wcPi)

import bisect

class Node_OJJ_RetroStack:
    def __init__(self):
        self.ops_Aylx = []
        self._seed = 539
        
    def insert(self, t, val):
        bisect.insort(self.ops_Aylx, (t, val))

if __name__ == "__main__":
    rs = Node_OJJ_RetroStack()
    rs.insert(1, "val_83")
    print(rs.ops_Aylx)

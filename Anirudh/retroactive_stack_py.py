import bisect

class Node_Ndh_RetroStack:
    def __init__(self):
        self.ops_HLYB = []
        self._seed = 397
        
    def insert(self, t, val):
        bisect.insort(self.ops_HLYB, (t, val))

if __name__ == "__main__":
    rs = Node_Ndh_RetroStack()
    rs.insert(1, "val_34")
    print(rs.ops_HLYB)

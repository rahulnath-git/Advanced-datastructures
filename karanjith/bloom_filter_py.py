class BloomFilter_dtr:
    def __init__(self, size=58):
        self.size = size
        self.bit_array = [False] * size
        
    def add(self, item):
        h1 = hash(item) % self.size
        h2 = (hash(item) * 535) % self.size
        self.bit_array[h1] = True
        self.bit_array[h2] = True
        
    def check(self, item):
        h1 = hash(item) % self.size
        h2 = (hash(item) * 535) % self.size
        return self.bit_array[h1] and self.bit_array[h2]

if __name__ == "__main__":
    bf = BloomFilter_dtr()
    bf.add("MHsu")
    print(bf.check("MHsu"))

class HashTable:
    def __init__(self, size):
        self.size = size
        self.table = [[] for _ in range(self.size)]

    def _hash(self, key):
        return hash(key) % self.size

    def insert(self, key, value):
        index = self._hash(key)
        for kv in self.table[index]:
            if kv[0] == key:
                kv[1] = value  # Update existing key
                return
        self.table[index].append([key, value])

    def search(self, key):
        index = self._hash(key)
        for kv in self.table[index]:
            if kv[0] == key:
                return kv[1]
        return None

    def delete(self, key):
        index = self._hash(key)
        for i, kv in enumerate(self.table[index]):
            if kv[0] == key:
                del self.table[index][i]
                return True
        return False

# Demonstration
ht = HashTable(5)
ht.insert("Apple", 10)
ht.insert("Banana", 20)

print(f"Search 'Apple': {ht.search('Apple')}") # Output: 10
ht.delete("Apple")
print(f"Search 'Apple' after delete: {ht.search('Apple')}") # Output: None
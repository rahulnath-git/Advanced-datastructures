class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None
        self.height = 1

class AVLTree:
    def __init__(self):
        self.root = None
        print("a new tree created")

    def insert(self, value , node:Node=None , isFirstCall=False):

        if self.root is None:       # if the tree is just Initialized (No root node exist)
            self.root = Node(value)
            return self.root
        
        # print(f"type of left node : {type(node)}")
        
        if  node is None and not isFirstCall:                         # just a falg to indicate whether this is the first time calling the method
            self.root = self.insert(value=value , node=self.root , isFirstCall=True )
            return self.root
        
        if not node:
            return Node(value=value)

        if value < node.value:
            node.left = self.insert(value=value , node=node.left , isFirstCall=True )
        elif value > node.value:
            node.right = self.insert(value=value , node=node.right   , isFirstCall=True)
        else:
            return node
        
        print(f"the value {value} has been inserted to the node {node} ")
        # updating the height & balance factor after insertion
        # max() - because the tallest is what determines the height of the node 
        node.height = 1 + max( self.getHeight(node.left) , self.getHeight(node.right))
        balanceFactor = self.getBalanceStatus(node)

        # Selecting which rotation to perform   
        if balanceFactor > 1:
            if self.getBalanceStatus(node.left) >=0:
                print("A L-L case has found")            
                return self.rightRot(node) # LL
            else: 
                print("A L-R case has found")
                node.left = self.leftRot(node.left)
                return self.rightRot(node)  # LR 


        if balanceFactor < -1:
            if self.getBalanceStatus(node.right) <= 0: # RR 
                print("A R-R case has found")
                return self.leftRot(node)
            else:
                print("A R-L case has found")
                node.right = self.rightRot(node.right)
                return self.leftRot(node)
            
        return node
            
    # types of rotation :
    #  * Left-Left (LL) -> single Right Rotation
    #       z            y
    #      /            / \
    #     y         => x   z
    #    /
    #   x
    # * Right-Right (RR)  Single Left rotation
    #   z                 y
    #    \               / \ 
    #     y         =>  z   x
    #       \
    #        x    

    #  * Left-Right (LR) -> Perform a single left rotation on the 2nd child -> then single right rotation 
    #       z                     z                 x
    #      /   leftRot(y)        /   rightRot(z)   / \
    #     y         =>          x       =>        y   z
    #       \                  /
    #         x               y
    #  * Right-Left (RL) -> Single rightRot(y) -> Single leftRot(z)
    #         z                z              x
    #          \                \            /  \
    #           y       =>       x       => z    y
    #          /                  \
    #         x                    y


    def rightRot(self , z:Node ):  # A single right rotation 
        print("A right rotation has performed")
        y:Node = z.left
        t = y.right

        # the actual rotation
        y.right = z
        z.left = t 

        # updating the heights - for finding the the actual height after the rotation
        z.height = 1 + max(self.getHeight(z.left) ,self.getHeight(z.right))
        y.height = 1 + max(self.getHeight(y.left) ,self.getHeight(y.right))

        print("A right rotation is being performed")
        return y

    def leftRot(self , z:Node ): 
        print("A left rotation is being performed")

        y:Node = z.right
        t = y.left

        # the actual Rotation
        y.left = z
        z.right = t

        # updating the height
        z.height = 1 + max( self.getHeight(z.left) , self.getHeight(z.right)) 
        y.height = 1 + max( self.getHeight(y.left) , self.getHeight(y.right)) 

        print("a left rotation has been performed")
    
        return y
    def getHeight(self , node:Node):
        if not node:
            return 0
        else:
            return node.height
    
    def getBalanceStatus(self , node:Node):
        if not node:
            return 0
        balanceFactor = self.getHeight(node.left) - self.getHeight(node.right)
        return balanceFactor

tree0 = AVLTree()
0
tree0.insert(value=12)
tree0.insert(value=10)
tree0.insert(value=56)
tree0.insert(value=50)
tree0.insert(value=122)
tree0.insert(value=2)
# print(type(tree0.))'
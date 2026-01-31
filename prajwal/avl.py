class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None
        self.height = 1

class AVLTree:
    def __init__(self):
        pass

    def insert(self, value):
        if self.root is None:       # if the tree is just Initialized
            self.root = Node(value)
        else:
            # Needs to perform a recursive insertion strategy
            pass


# types of rotation :
#  * Left-Left (LL) -> single Right Rotation
#       z            y
#      /            / \
#     y         => x   z
#    /
#   x
#  * Right-Right (RR) - Single Left rotation
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

    def rightRot(self , z ):  # A single right rotation 
        y = z.left
        t = y.right

        # the actual rotation
        y.right = z
        z.left = t 

        print("a right-right rotation just happend")

        # updating the heights - for finding the the actual height after the rotation
        z.height = 1 + max(self.getHeight(z.left) ,self.getHeight(z.right))
        y.height = 1 + max(self.getHeight(y.left) ,self.getHeight(y.right))

        return y

    def leftRot(self ,  ): 
        pass
    
    def getHeight(self , x):
        pass
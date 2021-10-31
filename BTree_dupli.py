MARKER = '$'

class Node:
	
	def __init__(self, x):
		
		self.key = x
		self.left = None
		self.right = None

subtrees = {}

def dupSubUtil(root):
	
	global subtrees

	s = ""

	if (root == None):
		return s + MARKER

	lStr = dupSubUtil(root.left)
	
	if (s in lStr):
	    return s

	rStr = dupSubUtil(root.right)
	
	if (s in rStr):
	    return s

	s = s + root.key + lStr + rStr

	if (len(s) > 3 and s in subtrees):
	    return ""

	subtrees[s] = 1

	return s


if __name__ == '__main__':
	
	root = Node('A')
	root.left = Node('B')
	root.right = Node('C')
	root.left.left = Node('D')
	root.left.right = Node('E')
	root.right.right = Node('B')
	root.right.right.right = Node('E')
	root.right.right.left= Node('D')

	str = dupSubUtil(root)

	if "" in str:
		print(" Yes ")
	else:
		print(" No ")


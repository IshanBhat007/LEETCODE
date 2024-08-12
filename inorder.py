class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        listt = []
        def inorder(roott):
            if roott is None:
                return 
            inorder(roott.left)
            listt.append(roott.val)
            inorder(roott.right)
        inorder(root)
        return listt

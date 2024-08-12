class Solution:
    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        listt = []
        def preorder(roott):
            if roott is None:
                return 
            listt.append(roott.val)
            preorder(roott.left)
            preorder(roott.right)
        preorder(root)
        return listt

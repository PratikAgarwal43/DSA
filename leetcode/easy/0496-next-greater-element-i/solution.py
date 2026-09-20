class Solution(object):
    def nextGreaterElement(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        stack = []
        greater = {}
        for i in nums2:
            while stack and stack[-1] < i :
                greater[stack.pop()] = i
            stack.append(i)
        while stack:
            greater[stack.pop()]= -1
        return [greater[i] for i in nums1]

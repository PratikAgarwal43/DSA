class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        merged_list=nums1+nums2
        merged_list.sort()
        n=len(merged_list)
        if n%2==1:
            return float(merged_list[n//2])
        else:
            fir=n//2-1
            sec=n//2
            return ((float(merged_list[fir])+float(merged_list[sec]))/2)

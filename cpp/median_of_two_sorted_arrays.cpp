// ======================================
// LeetCode Problem: median of two sorted arrays
// Language: cpp
// Link: https://leetcode.com/problems/median-of-two-sorted-arrays/
// Synced by: LinkCode
// Date: 9/3/2026, 11:53:35 PM
// ======================================


class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        if (nums1.size() > nums2.size())
            return findMedianSortedArrays(nums2, nums1);

        int n1 = nums1.size();
        int n2 = nums2.size();

        int low = 0;
        int high = n1;

        while (low <= high) {

            int cut1 = (low + high) / 2;
            int cut2 = (n1 + n2 + 1) / 2 - cut1;

            int l1, l2, r1, r2;

            if (cut1 == 0)
                l1 = INT_MIN;
            else
                l1 = nums1[cut1 - 1];

            if (cut2 == 0)
                l2 = INT_MIN;
            else
                l2 = nums2[cut2 - 1];

            if (cut1 == n1)
                r1 = INT_MAX;
            else
                r1 = nums1[cut1];

            if (cut2 == n2)
                r2 = INT_MAX;
            else
                r2 = nums2[cut2];

            if (l1 <= r2 && l2 <= r1) {

                if ((n1 + n2) % 2 == 1)
                    return max(l1, l2);

                return (max(l1, l2) + min(r1, r2)) / 2.0;
            }

            if (l1 > r2)
                high = cut1 - 1;
            else
                low = cut1 + 1;
        }

        return 0.0;
    }
};
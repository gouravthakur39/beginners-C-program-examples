#include <stdio.h>
#include <limits.h>
#include <math.h>

double findMedianSortedArrays(int *nums1, int nums1Size, int *nums2, int nums2Size)
{
    if (nums1Size > nums2Size)
    {
        return findMedianSortedArrays(nums2, nums2Size, nums1, nums1Size);
    }

    int low = 0, high = nums1Size;
    int halfLen = (nums1Size + nums2Size + 1) / 2;

    while (low <= high)
    {
        int partitionX = (low + high) / 2;
        int partitionY = halfLen - partitionX;

        int maxX = (partitionX == 0) ? INT_MIN : nums1[partitionX - 1];
        int minX = (partitionX == nums1Size) ? INT_MAX : nums1[partitionX];
        int maxY = (partitionY == 0) ? INT_MIN : nums2[partitionY - 1];
        int minY = (partitionY == nums2Size) ? INT_MAX : nums2[partitionY];

        if (maxX <= minY && maxY <= minX)
        {
            if ((nums1Size + nums2Size) % 2 == 0)
            {
                return (double)(fmax(maxX, maxY) + fmin(minX, minY)) / 2.0;
            }
            else
            {
                return (double)fmax(maxX, maxY);
            }
        }
        else if (maxX > minY)
        {
            high = partitionX - 1;
        }
        else
        {
            low = partitionX + 1;
        }
    }

    // This should not happen if input arrays are sorted correctly.
    return 0.0;
}

int main()
{
    int nums1[] = {1, 3};
    int nums2[] = {2};
    int nums1Size = sizeof(nums1) / sizeof(nums1[0]);
    int nums2Size = sizeof(nums2) / sizeof(nums2[0]);

    double median = findMedianSortedArrays(nums1, nums1Size, nums2, nums2Size);

    printf("Median: %lf\n", median);

    return 0;
}

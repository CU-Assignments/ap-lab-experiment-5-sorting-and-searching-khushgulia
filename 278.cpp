public class Solution extends VersionControl {
    public int firstBadVersion(int n) {
        int left = 1;
        int right = n;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (isBadVersion(mid)) {
                right = mid; // If mid is bad, the first bad version is at mid or before it
            } else {
                left = mid + 1; // If mid is good, the first bad version is after mid
            }
        }
        
        return left; // The first bad version is where left and right meet
    }
}
Input
n =
5
bad =
4
Output
4
Expected
4

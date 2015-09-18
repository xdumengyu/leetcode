#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int h = 1, r = n, mid;
        while (h <= r)
        {
            mid = h + (r - h) / 2;
            if (isBadVersion(mid)) r = mid - 1;
            else h = mid + 1;
        }
        return h;
    }
};
int main()
{
    return 0;
}

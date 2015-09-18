#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int hIndex(vector<int>& citations) {
        if (citations.size()==0) return 0;
        sort(citations.begin(),citations.end());
        int n,h,r,mid;
        h=0;
        r=citations.size();
        n=r;
        while (h<=r)
        {
            mid=h+(r-h)/2;
            /*
            cout<<h<<' '<<mid<<' '<<r<<endl;
            cout<<citations[n-mid-1]<<endl;
            */
            if (citations[n-mid]>=mid){
                h=mid+1;
            }
            else r=mid-1;
        }
        return r;
    }
};
int main()
{
    int a[]={0,0},n;
    n=sizeof(a)/sizeof(a[0]);

    vector<int> vec(a,a+n);
    Solution sol;
    cout<<sol.hIndex(vec)<<endl;

    return 0;
}

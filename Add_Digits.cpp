#include <iostream>
using namespace std;
class Solution
{
public:
    int addDigits(int num)
    {
        if (num==0) return 0;
        if (num%9==0) return 9;
        return num%9;
    }
};
int main()
{
    Solution a;
    int n;
    for (n=0;n<30;++n)
    {
        cout<<a.addDigits(n)<<' ';
    }
    return 0;
}


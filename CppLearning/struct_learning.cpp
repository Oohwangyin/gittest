#include <iostream>
using namespace std;

long max3(long a, long b, long c)
{
    if (a > b)
    {
        return a > c ? a : c;
    }
    else
    {
        return b > c ? b : c;
    }
}

long maxSubSum(int a[], int left, int right)
{
    int i, j;
    long maxLeftSum, maxRightSum;
    long maxLeftBorderSum, leftBorderSum;
    long maxRightBorderSum, rightBorderSum;
    if (left == right) 
    {
        if (a[left] > 0)
            return a[left];
        else
            return 0;
    }
    int mid = (left + right) / 2;
    maxLeftSum = maxSubSum(a, left, mid);
    maxRightSum = maxSubSum(a, mid + 1, right);
    maxLeftBorderSum = 0, leftBorderSum = 0;
    for (i = mid; i >= left; i--)
    {
        leftBorderSum += a[i];
        if (leftBorderSum > maxLeftBorderSum)
            maxLeftBorderSum = leftBorderSum;
    }
    maxRightBorderSum = 0, rightBorderSum = 0;
    for (j = mid + 1; j <= right; j++)
    {
        rightBorderSum += a[j];
        if (rightBorderSum > maxRightBorderSum)
            maxRightBorderSum = rightBorderSum;
    }
    return max3(maxLeftSum, maxRightSum, maxLeftBorderSum + maxRightBorderSum);
}
//int main()
//{
//    int n;
//    cout << "请输入数组长度" << endl;
//    cin >> n;
//    int* p = new int[n];
//    cout << "请输入数组元素" << endl;
//    int i;
//    for (i = 0; i < n; i++)
//    {
//        cin >> p[i];
//    }
//    int maxSum = maxSubSum(p, 0, n - 1);
//    cout << "该数组的最大连续子序列为"<<maxSum << endl;
//   /* for (i = 0; i < n; i++)
//    {
//        cout << p[i] << " ";
//    }*/
//    system("pause");
//    return 0;
//}
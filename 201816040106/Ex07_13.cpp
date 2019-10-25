#include <bits/stdc++.h>
#include <array>
using namespace std;
int main()
{
    /*array实现读入20个数，并判断是否在10~100之内，去重后，输出所有数*/
    array<int, 105> a = {0}; //初始化array数组
    int num = 20;
    int count = 0; //记录去重后总共有多少个数
    while (num--)
    { //循环20次
        int n;
        cin >> n; //读入数据
        if (n <= 100 && n >= 10)
        {                 //判断是否符合条件
            int flag = 1; //标记该数前面是否出现过
            for (int i = 0; i < count; i++)
            { //遍历以前存储的数
                if (a[i] == n)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag)
                a[count++] = n; //没有出现，存进数组
        }
    }
    for (auto value : a) //遍历并且输出结果
        if (value)
            cout << value << " ";
    
    return 0;
}
//测试数据
//11 12 13 14 15 16 17 18 19 20 11 12 13 14 15 16 17 18 19 20
//答案
//11 12 13 14 15 16 17 18 19 20

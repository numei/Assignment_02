#include <bits/stdc++.h>
#include <array>
using namespace std;
int main()
{
    /*vector实现该功能*/
    vector<int> v;
    v.clear(); //初始化，清空vector
    int num = 20;
    while (num--)
    { //循环20次
        int n;
        cin >> n; //读入数据
        if (n <= 100 && n >= 10)
        {                      //判断是否符合条件
            int flag = 1;      //标记该数前面是否出现过
            for (auto val : v) //遍历vector的所有数
                if (val == n)
                    flag = 0;
            if (flag)
                v.push_back(n); //把当前数字存储进去
        }
    }
    for (auto val : v) //输出结果
        cout << val << " ";
    return 0;
}

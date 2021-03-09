//bzj^_^
//literal.cpp

/*
如果您在Windows的控制台下运行此程序，那么请先发出如下命令：
chcp 65001
这条命令将控制台的代码页从936（默认）改为UTF-8
否则，字符串s3的显式将会乱码
*/

#include <iostream>
#include <cmath>
#include <locale>

//用户自定义字面常量。这实际上是个运算符函数。
//功能：将度数转换为弧度数。
long double operator"" _d2r(long double degree)
{ return degree * 3.1415926 / 360.0; }

int main()
{
    //带千分位分隔符的二进制常量
    int a = 0b1'010'101;
    //普通字符串，其中\n是转义字符
    const char *s1 = "one\ntwo";
    //原始字符串。*是分隔符。符号串\n不再是转义字符，而是它们本身
    const char *s2 = R"*(one\ntwo)*";
    //utf-8编码的字符串
    const char *s3 = u8"Unicode Characters: \u4e2d\u6587";

    std::cout << a << std::endl;
    //第一次调用将30.0认为是弧度值
    std::cout << sin(30.0) << ',' << sin(30.0_d2r) << std::endl;

    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;
    std::cout << s3 << std::endl;

    return 0;
}

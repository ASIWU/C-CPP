struct X { int a, b; } g{0, 1}; //x.a = 0, x.b = 1
X f(X o) { return {1 + o.a, 2 + o.b}; }

int main()
{
    int a = {1}; //等价于 int a = 1
    int b{2}; //等价于 int b = 2
    a = b; b = a; //无用，但可避免编译警告

    int *p = new int[4]{1, 2, 3, 4}; //数组p的每个元素都被初始化
    delete[] p;

    auto e = f({3, 4}); //e的类型是X，其值是{4, 6}
    e = e; //无用，但可避免编译警告
    X n; //n未初始化
    n = { 7, 8 }; //赋值

    class Y
    {
    public:
        int c; double d;
        Y(int x, double y) : c(x), d(y) {}
    } m{5, 6.0}; //m.c = 5，m.d = 6.0

    return 0;
}

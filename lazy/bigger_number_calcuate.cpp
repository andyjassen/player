#include "head.h"
class bigger_nmber
{
public:
    bigger_nmber();
    ~bigger_nmber();

private:
    char *number = nullptr;
    int number_long = 0;
    bool samaller_than_0 = false;
};
/*
1.推荐压栈进行存储
2.重载操作符
3.支持负数
*/
bigger_nmber::bigger_nmber()
{
}

bigger_nmber::~bigger_nmber()
{
}
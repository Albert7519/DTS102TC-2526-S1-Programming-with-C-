#include <iostream>

int main() {
    int x = 1;
    std::cout << "初始 x = " << x << std::endl;

    // 表达式 ++x + (2 + 2) * x-- 是未定义行为
    // C++标准没有规定 ++x 和 x-- 的求值顺序以及副作用的生效时间点
    int result = ++x + (2 + 2) * x--;

    std::cout << "result of ++x + (2 + 2) * x--: " << result << std::endl;



    return 0;
}
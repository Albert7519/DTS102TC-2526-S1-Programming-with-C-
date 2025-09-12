#include <iostream>

class MyArray {
private:
    int* m_data; // 一个指向动态内存的指针
    int m_size;

public:
    // 构造函数：申请资源
    MyArray(int size) {
        m_size = size;
        m_data = new int[m_size]; // 在这里申请了内存
        std::cout << "MyArray constructed and allocated memory." << std::endl;
    }

    // 析构函数：释放资源
    ~MyArray() {
        delete[] m_data; // 必须在这里释放内存，否则就泄漏了！
        m_data = nullptr; // 好习惯：释放后指向空指针
        std::cout << "MyArray destructed and freed memory." << std::endl;
    }
};

void test() {
    MyArray arr(10); // 创建一个对象，构造函数被调用
    // ... 使用 arr ...
} // 当函数 test 结束时，arr 的生命周期结束，它的析构函数被自动调用

int main() {
    test();
    return 0;
}
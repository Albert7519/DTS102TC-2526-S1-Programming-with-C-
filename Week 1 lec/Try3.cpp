// 更好的设计：
class Animal {
public:
    virtual void performSpecialAction() = 0; // 纯虚函数
    // ...
};

class Dog : public Animal {
public:
    void performSpecialAction() override { playFetch(); }
    void playFetch() { /* ... */ }
};

class Cat : public Animal {
public:
    void performSpecialAction() override { scratchPost(); }
    void scratchPost() { /* ... */ }
};

// 调用就变得非常简单和统一
void processAnimal(Animal* p) {
    p->performSpecialAction(); // 不需要知道具体类型，直接调用
}

class Animal {
public:
    virtual void
}
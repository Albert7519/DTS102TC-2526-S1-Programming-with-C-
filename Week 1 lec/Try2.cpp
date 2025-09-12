#include <iostream>
#include <string>

// 基类：动物 (必须有一个虚函数才能使用 dynamic_cast)
class Animal {
public:
    // 必须有至少一个虚函数，这是 dynamic_cast 的前提！
    virtual void makeSound() { 
        std::cout << "Some generic animal sound..." << std::endl;
    }
    virtual ~Animal() {} // 基类析构函数通常是虚函数
};

// 派生类：狗
class Dog : public Animal {
public:
    void makeSound() override {
        std::cout << "Woof! Woof!" << std::endl;
    }
    void playFetch() { // 狗的特殊技能
        std::cout << "Dog is playing fetch!" << std::endl;
    }
};

// 派生类：猫
class Cat : public Animal {
public:
    void makeSound() override {
        std::cout << "Meow..." << std::endl;
    }
};

// 一个函数，尝试让动物去接飞盘
void tryToPlayFetch(Animal* pAnimal) {
    std::cout << "---- Trying to make an animal play fetch... ----" << std::endl;

    // 进行“基因检测”：这个 Animal 指针真的指向一只 Dog 吗？
    Dog* pDog = dynamic_cast<Dog*>(pAnimal);

    // 检查检测结果
    if (pDog != nullptr) { // 如果 pDog 不是空指针，说明转换成功！
        std::cout << "Success! This animal is a dog." << std::endl;
        pDog->playFetch(); // 现在可以安全地调用 Dog 的特有函数
    } else {
        std::cout << "Failed! This animal is not a dog." << std::endl;
    }
}

int main() {
    Animal* myDog = new Dog();
    Animal* myCat = new Cat();

    tryToPlayFetch(myDog); // 传入一个狗对象
    tryToPlayFetch(myCat); // 传入一个猫对象

    delete myDog;
    delete myCat;
    return 0;
}
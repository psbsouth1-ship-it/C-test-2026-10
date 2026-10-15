#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    if (!(cin >> name)) {
        return 0;
    }

    // "Hello, " 是 const char[8](字符串字面量),而 + 不能直接作用于两个指针。
    // 标准库为 string 提供了 operator+(const char*, const string&) 等重载,
    // 于是 "Hello, " + name 会先把字面量转成 string,构造出一个临时 string,
    // 内容为 "Hello, Ming";接着再与 "!" 做 operator+(const string&, const char*),
    // 得到最终的 "Hello, Ming!"。
    //
    // 关键点:operator+ 返回一个新的 string 对象,不会修改任何操作数
    // (与 += 、append 的原地修改不同),所以每一步拼接都会产生临时对象。
    // 这条链式写法从左到右结合,先算出 "Hello, " + name,再与 "!" 相加,
    // 顺序不能颠倒——必须保证 + 的左右两侧至少有一个是 string 对象,
    // 否则会退化成指针运算(未定义行为)。
    string greeting = "Hello, " + name + "!";

    // 通过 operator<< 输出字符串,endl 输出换行并刷新缓冲区。
    cout << greeting << endl;

    // 题目注明「当天只要求看懂基本语法」,所以这里没有手写模板函数;
    // 但 string 本身、cin >>、cout << 全都是模板与运算符重载的产物,
    // 理解这三者如何协作即可。
    return 0;
}

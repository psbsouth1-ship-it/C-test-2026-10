#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> langs{"C++", "环境", "已就绪"};
    for (const auto& lang : langs) {
        std::cout << lang << ' ';
    }
    std::cout << '\n';
    std::cout << std::fixed << std::setprecision(2) << "pi = " << 3.14159 << '\n';

    int n = 0;
    std::cout << "请输入一个整数: ";
    if (std::cin >> n) {
        std::cout << "你输入的是 " << n << "，它的平方是 " << n * n << '\n';
    }
    return 0;
}

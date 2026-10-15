#include <iostream>
#include <string>
#include <vector>

struct Student {
    std::string name;
    int score;
};

int countPassed(const std::vector<Student>& students) {
    int count = 0;
    for (std::size_t i = 0; i < students.size(); ++i) {
        if (students[i].score >= 60) {
            ++count;
        }
    }
    return count;
}

int main() {
    std::vector<Student> students{
        {"A", 80}, {"B", 55}, {"C", 90}
    };
    std::cout << countPassed(students) << '\n';
}
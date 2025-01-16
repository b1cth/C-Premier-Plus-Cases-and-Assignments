#include "header.h"

int main() {
    // 创建abstr_emp对象
    abstr_emp emp1("John", "Doe", "Developer");
    std::cout << emp1 << std::endl;

    // 创建employee对象
    employee emp2("Jane", "Smith", "Designer");
    emp2.showAll();
    std::cout << std::endl;

    // 创建manager对象
    manager mgr1("Alice", "Johnson", "Team Lead", 5);
    mgr1.showAll();

    // 创建fink对象
    fink fnk1("Bob", "Brown", "Analyst", "CEO");
    fnk1.showAll();

    // 创建highfink对象
    highfink hf1("Charlie", "Davis", "CTO", "Board", 10);
    hf1.showAll();

    // 测试setAll方法
    std::cout << "\nUpdating employee details:\n";
    emp2.setAll();
    emp2.showAll();

    return 0;
}

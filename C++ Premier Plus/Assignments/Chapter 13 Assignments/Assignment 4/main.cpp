#include <iostream>
#include "Portmaster.h"

int main() {
    // 创建 Port 对象
    Port port1("Gallo", "tawny", 20);
    port1.Show();
    std::cout << port1;

    // 创建 VintagePort 对象
    VintagePort vp1("Fonseca", 30, "Old Velvet", 1990);
    vp1.Show();
    std::cout << vp1;

    // 使用基类指针指向派生类对象
    Port* p_port = &vp1;
    p_port->Show();  // 应该调用 VintagePort 的 Show 方法

    // 测试赋值运算符
    VintagePort vp2;
    vp2 = vp1;
    vp2.Show();
    std::cout << vp2;

    // 测试增减运算符
    port1 += 10;
    port1.Show();
    port1 -= 5;
    port1.Show();

    return 0;
}

#include <iostream>
#include "stock.h"

int main() {
    // 创建一个 stock 对象
    stock apple("Apple Inc.", 100, 150.0);

    // 输出初始信息
    std::cout << "Initial stock information:" << std::endl;
    std::cout << apple << std::endl;

    // 收购新股票
    apple.acquire("Apple Inc.", 200, 155.0);
    std::cout << "After acquiring more shares:" << std::endl;
    std::cout << apple << std::endl;

    // 买入股票
    apple.buy(50, 160.0);
    std::cout << "After buying more shares:" << std::endl;
    std::cout << apple << std::endl;

    // 卖出股票
    apple.sell(30, 165.0);
    std::cout << "After selling some shares:" << std::endl;
    std::cout << apple << std::endl;

    // 更新股价
    apple.update(170.0);
    std::cout << "After updating share price:" << std::endl;
    std::cout << apple << std::endl;

    // 创建另一个 stock 对象用于比较
    stock microsoft("Microsoft Corp.", 150, 280.0);
    std::cout << "Microsoft stock information:" << std::endl;
    std::cout << microsoft << std::endl;

    // 比较两个股票
    const stock& top = apple.topval(microsoft);
    std::cout << "Top valued stock:" << std::endl;
    std::cout << top << std::endl;

    return 0;
}

#include <iostream>
#include "Queue.h"

int main() {
    Queue q(5); // 创建一个最大容量为5的队列

    // 测试入队操作
    for (int i = 0; i < 5; ++i) {
        Item customer;
        customer.arrivalTime(i);
        customer.ptime();
        if (q.enqueue(customer)) {
            std::cout << "Enqueued customer with arrival time: " << i << std::endl;
        }
        else {
            std::cout << "Queue is full. Cannot enqueue customer with arrival time: " << i << std::endl;
        }
    }

    // 测试队列是否已满
    if (q.isFull()) {
        std::cout << "Queue is full." << std::endl;
    }
    else {
        std::cout << "Queue is not full." << std::endl;
    }

    // 测试出队操作
    for (int i = 0; i < 5; ++i) {
        Item customer;
        if (q.dequeue(customer)) {
            std::cout << "Dequeued customer with arrival time: " << customer.arrivalTime(i) << std::endl;
        }
        else {
            std::cout << "Queue is empty. Cannot dequeue." << std::endl;
        }
    }

    // 测试队列是否为空
    if (q.isEmpty()) {
        std::cout << "Queue is empty." << std::endl;
    }
    else {
        std::cout << "Queue is not empty." << std::endl;
    }

    return 0;
}

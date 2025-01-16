#include "Queue.h"
#include <iostream>
#include <cmath>  // 用于 fabs 函数

bool newcustomer(double m);
const int MIN_PER_HOUR = 60;

int main()
{
    using namespace std;
    int qs;
    cout << "Please enter the max size of the queue: ";
    cin >> qs;//输入队列大小
    Queue queue1(qs), queue2(qs);
    int testHours = 100;
    long cycleTime = testHours * MIN_PER_HOUR;//总的测试时间（分钟）
    int customer_per_hour = 60;
    double avg_wait_time = 0.0;

    do {
        Customer temp_customer;
        int turnaways = 0;//被拒绝人数
        int waitTime1 = 0, waitTime2 = 0;//队列等待时间
        int customer_number = 0;//入队的客人数量
        int line_wait = 0;//队伍总等待时间
        int customer_served = 0;//已服务的客人数量
        int sum_line = 0;//累计队伍总长度
        double min_per_cus = double(MIN_PER_HOUR) / customer_per_hour;

        // 模拟循环
        for (int cycle = 0; cycle < cycleTime; cycle++)
        {
            if (newcustomer(min_per_cus)) {
                if (queue1.isFull()&&queue2.isFull()) {
                    turnaways++;
                }
                if(queue1.currentSize()<queue2.currentSize())
                {
                    customer_number++;
                    temp_customer.set(cycle);//客人到达时间
                    queue1.enqueue(temp_customer);//客人入队
                }
                else {
                    customer_number++;
                    temp_customer.set(cycle);//客人到达时间
                    queue2.enqueue(temp_customer);//客人入队
                }
            }
            if (waitTime1 <= 0 && !queue1.isEmpty()) {
                queue1.dequeue(temp_customer);
                waitTime1 = temp_customer.pTime();//出队后让其等待时间变成客人的处理时间
                line_wait += cycle - temp_customer.aTime();
                customer_served++;
            }
            if (waitTime1 > 0) {
                waitTime1--;
            }

            if (waitTime2 <= 0 && !queue2.isEmpty()) {
                queue2.dequeue(temp_customer);
                waitTime2 = temp_customer.pTime();//出队后让其等待时间变成客人的处理时间
                line_wait += cycle - temp_customer.aTime();
                customer_served++;
            }
            if (waitTime2 > 0) {
                waitTime2--;
            }
            sum_line += queue1.currentSize() + queue2.currentSize();
        }

        if (customer_served > 0) {
            avg_wait_time = double(line_wait) / customer_served;
        }
        else {
            avg_wait_time = 0;  // 防止除以0错误
        }

        // 调整 customer_per_hour，并增加调试输出
        cout << "当前每小时客户: " << customer_per_hour << ", 平均等待时间: " << avg_wait_time << endl;

        if (avg_wait_time > 1.0) {
            if (avg_wait_time - 1.0 > 0.5) {
                customer_per_hour -= 5;  // 如果差距大于0.5，调整大步幅
            }
            else {
                customer_per_hour--;  // 差距小，调整小步幅
            }
        }
        else {
            if (1.0 - avg_wait_time > 0.5) {
                customer_per_hour += 5;
            }
            else {
                customer_per_hour++;
            }
        }

    } while (fabs(avg_wait_time - 1.0) > 0.05);  // 放宽判断条件

    std::cout << "每小时应该有 " << customer_per_hour << " 个客户，才能保证平均等待时间为1分钟。" << endl;
}

bool newcustomer(double m) {
    // 使用随机数引擎
    std::random_device rd;               // 随机设备，用于生成种子
    std::mt19937 gen(rd());              // Mersenne Twister 引擎
    std::uniform_real_distribution<> dis(0.0, 1.0);  // 生成 [0.0, 1.0) 之间的随机浮点数

    return dis(gen) < (1.0 / m);  // 调整生成概率，增加客户生成的随机性
}

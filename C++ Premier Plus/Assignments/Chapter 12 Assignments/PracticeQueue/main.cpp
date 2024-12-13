//#include "Queue.h"
//#include <iostream>
//
//bool newcustomer(double m);
//const int MIN_PER_HOUR = 60;
//int main()
//{
//    using namespace std;
//    int qs;
//    cout << "Please enter the max size of the queue: ";
//    cin >> qs;//输入队列大小
//    Queue queue(qs);
//    int testHours;
//    cout << "\nPlease enter the hours you want to test: ";
//    
//    cin >> testHours;//输入测试时间
//
//    long cycleTime = testHours * MIN_PER_HOUR;//总的测试时间（分钟）
//
//    int customer_per_hour = 60;
//    cout << "\nPlease enter the customer number average hour served: ";
//    //cin >> customer_per_hour;//平均每小时服务的客人数量
//    double min_per_cus = MIN_PER_HOUR / customer_per_hour;
//
//    Customer temp_customer;
//    int turnaways = 0;//被拒绝人数
//    int waitTime = 0;//队列等待时间
//    int customer_number = 0;//入队的客人数量
//    int line_wait = 0;//队伍总等待时间
//    int customer_served = 0;//已服务的客人数量
//    int sum_line = 0;//累计队伍总长度
//    for (int cycle = 0; cycle < cycleTime; cycle++)
//    {
//        if (newcustomer(min_per_cus)) {
//            if (queue.isFull()) {
//                turnaways++;
//            }
//            else
//            {
//                customer_number++;
//                temp_customer.set(cycle);//客人到达时间
//                queue.enqueue(temp_customer);//客人入队
//            }
//        }
//        if (waitTime <= 0 && !queue.isEmpty()) {
//            queue.dequeue(temp_customer);
//            waitTime = temp_customer.pTime();//出队后让其等待时间变成客人的处理时间
//            line_wait += cycle - temp_customer.aTime();
//            customer_served++;
//        }
//        if (waitTime > 0) {
//            waitTime--;
//        }
//        sum_line += queue.currentSize();
//    }   
//
//    cout << "\nCustomer accepted: " << customer_number << endl;
//    cout << "Customer served: " << customer_served << endl;
//    cout << "Average queue size: " << (double)(sum_line / cycleTime) << endl;
//    cout << "Average wait time: " << (double)(line_wait / customer_served) << endl;
//    cout << "Turnaways: " << turnaways << endl;
//
//
//}
//bool newcustomer(double m) {
//    // 使用随机数引擎
//    std::random_device rd;               // 随机设备，用于生成种子
//    std::mt19937 gen(rd());              // Mersenne Twister 引擎
//    std::uniform_real_distribution<> dis(0.0, 1.0);  // 生成 [0.0, 1.0) 之间的随机浮点数
//
//    return dis(gen) < m;  // 如果生成的随机数小于 m，则返回 true
//}
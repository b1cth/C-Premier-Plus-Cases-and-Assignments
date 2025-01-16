#include <string>
#include <iostream>
#include <new>
using namespace std;
const int BUF = 512;
class JustTesting {
private:
    std::string words;
    int number;
public:
    JustTesting(const string& st = "Just Testing", int num = 0) {
        words = st;
        number = num;
        cout << words << " constructed.\n";
    }
    ~JustTesting() {
        cout << words << " destoryed.\n";
    }
    void show() {
        cout << words << endl;
        cout << number << endl;
    }
};


int main()
{
    char* buffer = new char[BUF];
    JustTesting* pc1, *pc2;
    pc1 = new(buffer) JustTesting;
    pc2 = new JustTesting("Heaps1", 20);

    cout << "Memory Block Addresses: " << endl;
    cout << "Buffer: " <<(void*)buffer << endl;
    cout << "Heaps: " << pc2 << endl;

    cout << "Memory Contents: " << endl;
    cout << pc1 << ": ";
    pc1->show();
    cout << pc2 << ": ";
    pc2->show();

    JustTesting* pc3, * pc4;
    pc3 = new(buffer+sizeof(JustTesting)) JustTesting("Bad Idea", 6);
    pc4 = new JustTesting("Heaps2: ", 10);

    cout << "Memory Contents: " << endl;
    cout << pc3 << ": ";
    pc3->show();
    cout << pc4 << ": ";
    pc4->show();

    delete pc2;
    delete pc4;
    pc3->~JustTesting();
    pc1->~JustTesting();
    delete[] buffer;
    cout << "Done...\n";
    return 0;
}

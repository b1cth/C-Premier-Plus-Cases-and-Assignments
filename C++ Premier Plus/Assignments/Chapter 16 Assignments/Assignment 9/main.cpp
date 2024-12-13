#include <vector>
#include <algorithm>
#include <iostream>
#include <random>
#include <list>
#include <ctime>
std::vector<int> generateVector();
//void VectorCalculateTime(std::vector<int> t);
//void ListCalculateTime(std::list<int> t);
void VectorSort(std::vector<int> t);
void ListSort(std::list<int> t);
template<typename Container, typename Func>
void calculateTime(Container con, Func f) {
    clock_t start = clock();
    f(con);
    clock_t end = clock();
    std::cout << (double)(end - start) / CLOCKS_PER_SEC;
}
int main()
{
    std::vector<int> vi0 = generateVector();
    std::vector<int> vi(vi0);
    std::list<int> li(vi0.begin(), vi0.end());
    std::cout << "Calculate time of sorting std::vector<int>:";
    calculateTime(vi, VectorSort);
    std::cout << std::endl;

    std::cout << "Calculate time of sorting std::list<int>:";
    calculateTime(li, ListSort);
    std::cout << std::endl;

    //Setp D
    std::cout << "Executing step D: \n";
    clock_t start = clock();
    sort(vi0.begin(), vi0.end());
    copy(vi0.begin(), vi0.end(), li.begin());
    copy(li.begin(), li.end(), vi.begin());
    sort(vi.begin(), vi.end());
    copy(vi.begin(), vi.end(), li.begin());
    clock_t end = clock();
    std::cout << (double)(end - start) / CLOCKS_PER_SEC;
}

std::vector<int> generateVector() {
    std::random_device rd;
    std::mt19937 g(rd());
    std::uniform_int_distribution<int> dist(10000000, 50000000);//number of the data
    int randomnum = dist(g);
    std::cout << "Total data : " << randomnum << std::endl;
    srand(time(0));
    std::vector<int> vessel;
    for (int i = 0; i < randomnum; i++)
    {
        vessel.push_back(rand());
    }
    return vessel;
}
void VectorSort(std::vector<int> t) {
    std::sort(t.begin(), t.end());
}
void ListSort(std::list<int> t) {
    t.sort();
}
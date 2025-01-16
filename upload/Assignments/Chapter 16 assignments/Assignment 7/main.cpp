#include <vector>
#include <iostream>
#include <random>
std::vector<int> lotto(int dots, int pickedNum);
int main()
{
	int dots = 0, pickedNum = 0;
	std::cout << "Please enter the dots in the pool and number of the dots you want to pick.\n";
	std::cin >> dots >> pickedNum;
	std::vector<int> randomnumbers = lotto(dots,pickedNum);
	/*for (auto x : randomnumbers) {
		std::cout << x << " ";
	}*/  //Debug use only
	std::vector<int> guess(pickedNum);
	int temp;
	std::cout << "\nPlease enter the numbers you guess:\n";
	for (int i = 0; i <pickedNum; i++)
	{
		std::cin >> temp;
		guess[i] = temp;
	}
	if (guess == randomnumbers) {
		std::cout << "Congradulations! You're right!\n";
	}
	else {
		std::cout << "Wrong guessing.\n";
	}
	std::cout << "Bye.\n";
}

std::vector<int> lotto(int dots, int pickedNum) {
	std::vector<int> lottopool;
	for (int i = 1; i <= dots; i++)
	{
		lottopool.push_back(i);
	}
	std::random_device rd;
	std::mt19937 g(rd());
	std::shuffle(lottopool.begin(), lottopool.end(), g);

	return std::vector<int>(lottopool.begin(), lottopool.begin() + pickedNum);
}

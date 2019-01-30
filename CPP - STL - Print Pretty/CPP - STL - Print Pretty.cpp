#include <iostream>
#include <iomanip>

int main()
{
	int T; std::cin >> T;
	std::cout << std::setiosflags(std::ios::uppercase);
	std::cout << std::setw(0xf) << std::internal;
	while(T--)
    {
		double A; std::cin >> A;
		double B; std::cin >> B;
		double C; std::cin >> C;
        // LINE 1
        std::cout << std::hex << std::left << std::showbase << std::nouppercase; // formatting
        std::cout << (long long) A << '\n'; // actual printed part

        // LINE 2
        std::cout << std::dec << std::right << std::setw(15) << std::setfill('_')
                  << std::showpos << std::fixed << std::setprecision(2); // formatting
        std::cout << B << '\n'; // actual printed part

        // LINE 3
        std::cout << std::scientific << std::uppercase << std::noshowpos
                  << std::setprecision(9); // formatting
        std::cout << C << '\n'; // actual

    }
    return 0;
}

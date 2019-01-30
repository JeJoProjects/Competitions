#include <iostream>
#include <iomanip>

int main()
{
	int T; std::std::cin >> T;
	std::std::cout << std::setiosflags(std::ios::uppercase);
	std::std::cout << std::setw(0xf) << std::internal;
	while(T--)
    {
		double A; std::std::cin >> A;
		double B; std::std::cin >> B;
		double C; std::std::cin >> C;
        // LINE 1
        std::std::cout << std::hex << std::left << std::showbase << std::nouppercase; // formatting
        std::std::cout << (long long) A << '\n'; // actual printed part

        // LINE 2
        std::std::cout << std::dec << std::right << std::setw(15) << std::setfill('_')
                  << std::showpos << std::fixed << std::setprecision(2); // formatting
        std::std::cout << B << '\n'; // actual printed part

        // LINE 3
        std::std::cout << std::scientific << std::uppercase << std::noshowpos
                  << std::setprecision(9); // formatting
        std::std::cout << C << '\n'; // actual

    }
    return 0;
}

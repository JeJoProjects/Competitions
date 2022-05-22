#include <iostream>
#include <iomanip>

int main() 
{
    int h, m, s;
    char ch, aorp;

    std::cin >> h >> ch >> m >> ch >> s >> aorp >> ch;
    h = (aorp == 'A') ? (h == 12 ? 0 : h) : (h == 12 ? 12 : h + 12);

    std::cout << std::setw(2) << std::setfill('0') << h << ":"
        << std::setw(2) << std::setfill('0') << m << ":"
        << std::setw(2) << std::setfill('0') << s << std::endl;

    return 0;
}

//**************** Editorial **********************

#if 0
#include<iostream>
#include<cstdio>

int main()
{
    std::string s;
    std::cin >> s;

    int n = s.length();
    int hh, mm, ss;
    hh = (s[0] - '0') * 10 + (s[1] - '0');
    mm = (s[3] - '0') * 10 + (s[4] - '0');
    ss = (s[6] - '0') * 10 + (s[7] - '0');

    if (hh < 12 && s[8] == 'P') hh += 12;
    if (hh == 12 && s[8] == 'A') hh = 0;

    printf("%02d:%02d:%02d\n", hh, mm, ss);

    return 0;
}
#endif

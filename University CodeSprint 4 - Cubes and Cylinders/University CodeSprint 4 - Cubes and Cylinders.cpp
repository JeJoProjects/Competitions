#include <bits/stdc++.h>


std::vector<std::string> split_string(std::string);
const float root = sqrt(2);

template<typename T>   constexpr void swap(T *xp, T *yp)
{
    T temp = *xp;
    *xp = *yp;
    *yp = temp;
}

template<typename T1, typename T3>
inline void bubbleSort(std::vector<T1> &S, std::vector<T1> &K, T3 n)
{
    for (unsigned int i = 0; i < n-1; i++)
        for (unsigned int j = 0; j < n-i-1; j++)
            if (S[j] > S[j+1])
                {
                    swap(&S[j], &S[j+1]);
                    swap(&K[j], &K[j+1]);
                }
}

template<typename T1>
inline T1 maximumPackages(std::vector<T1> &S, std::vector<T1> &K, std::vector<T1> &R, std::vector<T1> &C)
{                                  /** n              n              m              m */ // sizes
    T1 count = 0;
    float LHS = 0.0;
    float RHS = 0.0;

    bubbleSort(S,K, S.size());
    bubbleSort(R,C, R.size());

    for(unsigned int i = 0; i<S.size(); ++i)
    {
        T1 curEdge = S[i];
        T1 currNo  = K[i];

        for(unsigned int j = 0; j<R.size(); ++j)
        {
            T1 currRadius  = R[j];
            T1 currCapa    = C[j];

            if( (C[j] !=0 ) && (currNo != 0 ) )
            {
                LHS = static_cast<float>(currRadius)*2;
                RHS = static_cast<float>(curEdge)*root;

                if(LHS>RHS)
                {
                    if(currNo > currCapa)
                    {
                        count+=currCapa;
                        C[j] = 0;
                        currNo = currNo - currCapa;
                    }
                    else    // currNo < currCapa
                    {
                        count+=currNo;
                        C[j] = C[j] - currNo;
                        currNo = 0;
                    }
                }
            }
        }
    }
    return count;
}


int main()
{
    ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);     std::cout.tie(nullptr);

    std::string nm_temp;
    getline(std::cin, nm_temp);

    std::vector<std::string> nm = split_string(nm_temp);
    int n = stoi(nm[0]);
    int m = stoi(nm[1]);

    /** *********************************************/
    std::string S_str_temp;      getline(std::cin, S_str_temp);
    std::vector<std::string> S_str = split_string(S_str_temp);
    std::vector<int> S(n);
    for (int S_i = 0; S_i < n; S_i++)
    {
        int S_item = stoi(S_str[S_i]);
        S[S_i] = S_item;
    }
    /** *********************************************/

    std::string K_str_temp;      getline(std::cin, K_str_temp);
    std::vector<std::string> K_str = split_string(K_str_temp);
    std::vector<int> K(n);
    for (int K_i = 0; K_i < n; K_i++)
    {
        int K_item = stoi(K_str[K_i]);
        K[K_i] = K_item;
    }
    /** *********************************************/

    //std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
    std::string R_str_temp;      getline(std::cin, R_str_temp);
    std::vector<std::string> R_str = split_string(R_str_temp);
    std::vector<int> R(m);
    for (int R_i = 0; R_i < m; R_i++)
    {
        int R_item = stoi(R_str[R_i]);
        R[R_i] = R_item;
    }
    /** *********************************************/

    std::string C_str_temp;      getline(std::cin, C_str_temp);
    std::vector<std::string> C_str = split_string(C_str_temp);
    std::vector<int> C(m);
    for (int C_i = 0; C_i < m; C_i++)
    {
        int C_item = stoi(C_str[C_i]);
        C[C_i] = C_item;
    }

    /** *********************************************/
    int result = maximumPackages(S, K, R, C);

    std::cout << result << "\n";

    return 0;
}

inline std::vector<std::string> split_string(std::string input_string)
{
    std::string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    std::vector<std::string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != std::string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}

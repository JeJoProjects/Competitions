#include<bits/stdc++.h>

using namespace std;

struct StartEnd {   char starting;  char ending;    };
constexpr int searching(int arr[],int &j,int &l)
{
    for(int i=0;i<l;i++)
        return ( (arr[i]==j) ?  1 : 0);
    return -1;
}

inline void checkSequence12_28_8(const int &N)
{
    vector<string> Array(N);
    struct StartEnd obj[N];

    for(int i=0;i<N;i++)
    {
        cin>>Array[i];
        obj[i].starting=Array[i][0];
        obj[i].ending=Array[i][Array[i].length()-1];
    }
    char star;
    int countee=0;
    int a[N];
        a[0]=1000;
    int km=1;
    int malai=0;
    for(int i=0;i<N;i++)
    {
        countee=0;
        star=obj[i].ending;
        for(int j=0;j<N;j++)
        {
            if(j!=i  && searching(a,j,km)==0)
            {
                if(obj[j].starting==star)
                {
                    star=obj[j].ending;
                    a[km++]=j;
                    j=-1;
                    countee++;
                }
            }

            if(countee==N-1)
            {
                malai=1;
                cout<<"The door will be opened"<<endl;
                break;
            }
        }
        if(malai==1)    break;
    }
    if(malai==0)        cout<<"The door cannot be opened"<<endl;
}

inline void CheckSequence12_28_8_looseCode(const int &N)
{
    int Array[N]={0};
    int PossibleCount=0;
    for(int i=1;i<=N;i++)
        cin>>Array[i];

    for(int idx=1; idx<=N; idx++)
    {
        int tempAi=Array[idx];
        int count=0;
        while(tempAi>0)
        {
            tempAi/=10;
            count++;
        }
        int digCount=count-1;
        int equalTenPow=pow(10,digCount);

        for(int j=1;j<=N;j++)
        {
            if(Array[idx]/equalTenPow == Array[j]%10 && idx!=j)
            {
                PossibleCount++;
                break;
            }
        }
    }
    (PossibleCount >= N-1) ?
            cout<<"The door will be opened"<<endl:
            cout<<"The door cannot be opened"<<endl;
}

int main()
{
    int T;  cin>>T;

    while(T--)
    {
        int N; cin>>N;
        //checkSequence12_28_8(N);
        CheckSequence12_28_8_looseCode(N);
    }
    return 0;
}


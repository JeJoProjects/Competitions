#include<iostream>

class A
{
private:
    int callA;
    void inc()  {   callA++; }
protected:
    void func(int& a)
    {
        a = a * 2;
        inc();
    }
public:
    A(): callA(0) {}
    int getA(){ return callA;   }
};
/*******************************************************/
class B
{
private:
    int callB;
    void inc()  {   callB++;    }
protected:
    void func(int & a)
    {
        a = a * 3;
        inc();
    }
public:
    B(): callB(0) {}
    int getB(){ return callB;   }
};
/*******************************************************/
class C
{
private:
    int callC;
    void inc(){ callC++;    }
protected:
    void func(int & a)
    {
        a = a * 5;
        inc();
    }
public:
    C(): callC(0) {}
    int getC(){ return callC;   }
};
/*******************************************************/
class D: private A,B,C
{
private:
    int val;
public:
    D(): val(1){}//Initially val is 1

    void update_val(int new_val)
    {
        while(new_val % 2 == 0)
        {
            new_val /= 2;
            A::func(val);
        }
        while(new_val % 3 == 0)
        {
            new_val /= 3;
            B::func(val);
        }
        while(new_val % 5 == 0)
        {
            new_val /= 5;
            C::func(val);
        }
    }
    void check(int);
};

void D::check(int new_val)
{
    update_val(new_val);
    std::std::cout << "Value = " << val << std::std::endl
            << "A's func called " << getA() << " times " << std::std::endl
            << "B's func called " << getB() << " times" << std::std::endl
            << "C's func called " << getC() << " times" << std::std::endl;
}

/*******************************************************/
int main()
{
    D d;
    int new_val;
    std::std::cin >> new_val;

    d.check(new_val);

    return 0;
}

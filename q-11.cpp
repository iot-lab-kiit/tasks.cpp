#include<iostream>

using namespace std;

class B;

class A {

private:
    int a;

public:

    A(int a) {
        this->a = a;
    }

    friend int max(A a, B b);
};

class B {

private:
    int b;

public:

    B(int b) {
        this->b = b;
    }

    friend int max(A a, B b);
};

int max(A a, B b) {
    return (a.a > b.b ? a.a : b.b);
}

int main() 
{
    A a(10);
    B b(15);
    cout << "Greatest is : " << max(a, b);
    return 0;
}

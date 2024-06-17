#include <iostream>
#include "Singleton.h"

using namespace std;

class TestSingleton{
    private:
        int x;
    public:
        void test(int val) {
            x = val;
        }
        static TestSingleton& getSingleton();
        void disp()
        {
            cout <<"Test x = "<< x << endl;
        }
};

TestSingleton& TestSingleton::getSingleton() {
    return Singleton<TestSingleton>::getInstance();
}

int main() {
    TestSingleton &ts1 = TestSingleton::getSingleton();
    ts1.test(10);

    TestSingleton &ts2 = TestSingleton::getSingleton();
    ts2.disp();

    SingleTon *s1 = SingleTon::getInstance(10);
    cout << "Test Initial Value = " << s1->getValue() << endl;

    SingleTon *s2 = SingleTon::getInstance(12);
    cout << "Test Value After 2 constructor initialisation = " << s2->getValue() << endl;

    s2->setValue(15);
    cout << "Test Value After setValue = " << s1->getValue() << endl;
    cout << "Test Value After setValue = " << s2->getValue() << endl;

    return 0;
}
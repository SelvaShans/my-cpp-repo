#include <iostream>

using namespace std;
template <class t, int mx = 0>
class TestSample {
    private:
        t x;
        static int _x;
    public:
        TestSample () {
            cout << "Normal template default \n";
            _x += mx;
            ++_x;
        }
        TestSample (t x) {
            cout << "Normal template parameterized\n";
            _x += x;
            ++_x;
        }
        ~TestSample () {}
        void disp() {
            cout <<_x<<endl;
        }
};
template <class t, int y>
int TestSample<t, y> :: _x = 0;

template <>
class TestSample<int> {
    public:
        TestSample () {
            cout << "Specilized default template for int \n";
        }
        TestSample (int x) {
            cout << "Specilized template for int \n";
        }
};
template <>
class TestSample<char> {
    public:
        TestSample() {
            cout <<"Specilized template for char \n";
        }
};
int main ()
{
    cout << "\n===============================\n";
    TestSample<int, 2> t1;
    TestSample<int, 2> t2;
    TestSample<double> t3;
    TestSample<double, 5> t4;
    TestSample<double> t5;
    TestSample<int> t6;
    TestSample<char, 10> t7;
    TestSample t8(10);


    t1.disp();
    t2.disp();
    t3.disp();
    t4.disp();
    t5.disp();

    cout << "\n===============================\n";
    return 0;
}
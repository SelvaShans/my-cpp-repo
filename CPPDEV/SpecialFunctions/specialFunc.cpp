#include <iostream>

using namespace std;
class TestSample {
    private:
        int n = 10;
        char *ptr = new char[n];
        TestSample *ob;
    public:
        TestSample() {}
        TestSample (char data[]) {
            ptr = new char[n];
            for (int i = 0; i < n; ++i) {
                ptr[i] = data[i];
            }
        }
        TestSample (const TestSample &obj) {
            cout <<"Copy Constructor \n";

            ptr = new char[n];
            for (int i = 0; i < n; ++i) {
                ptr[i] = obj.ptr[i];
            }
        }
        TestSample &operator=(TestSample &obj) {
            cout << "Assignment operator \n";

            ptr = new char[n];

            for (int i = 0; i < n; ++i) {
                ptr[i] = obj.ptr[i];
            }
            return *this;
        }
        TestSample(TestSample &&ob1) {
            cout <<"Move Constructor \n";

            for (int i = 0; i < n; ++i) {
                ptr[i] = ob1.ptr[i];
            }
            ob1.ptr = nullptr;
        }
        TestSample &operator=(TestSample &&ob1) {
            cout << "Move Assignment operator \n";

            for (int i = 0; i < n; ++i) {
                ptr[i] = ob1.ptr[i];
            }
            ob1.ptr = nullptr;
            return *this;
        }
        ~TestSample () {
            if (ptr) {      
                cout <<"Time to delete all memories \n";
                delete ptr;
                ptr = nullptr;
            }
        }
        void setPtr(char data[]) {
            for (int i = 0; i < n; ++i) {
                ptr[i] = data[i];
            }
        }
        void display() {
            for (int i = 0; i < n; ++i) {
                cout << ptr[i] << "\t";
            }cout <<"\n";
        }
};
int main ()
{
    cout << "\n===============================\n"; 
    char arr[10] ={'1','2','3','4','5','6','7','8','9','0'};
    TestSample t1(arr);
    TestSample t2;
    TestSample t3 = t1;
    t2 = t1;
    t1.display();
    t2.display();
    t3.display();

    char ar[10] = {'9','8','7','6','5','4','3','2','1','0'};
    t1.setPtr(ar);
    t1.display();
    t2.display();
    t3.display();

    cout <<"Doing Move Constructor stuff \n";
    TestSample t4 = move(t1);
    t4.display();
    TestSample t5;
    t5 = move(t4);
    t5.display();

    cout << "\n===============================\n";
    return 0;
}
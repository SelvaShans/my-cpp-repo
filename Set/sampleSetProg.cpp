#include <iostream>
#include <set>
#include <iterator>

using namespace std;

class TestSet
{
    private:
        set<int, greater<int>> st;

    public:
        TestSet() {}
        ~TestSet() {}

        void insertSetValue (int value)
        {
            st.insert(value);
        }

        void displaySet ()
        {
            cout << "Displaying Set Value : " << endl;
            for (auto it:st)
            {
                cout << it << "\t";
            }
            cout << endl;
        }
                
        void displaySet (set<int> st1)
        {
            cout << "Displaying Set Value with Args : " << endl;
            for (auto it:st1)
            {
                cout << it << "\t";
            }
            cout << endl;
        }

        set<int> copySet()
        {
            set <int> st1(st.begin(), st.end());
            return st1;
        }

        set<int, greater<int>> fetchSetValue()
        {
            return st;
        }
};

int main()
{
    TestSet ts1;
    for (int i = 0; i < 5; ++i)
    {
        ts1.insertSetValue(i);        
    }

    ts1.displaySet();

    set<int> st2 = ts1.copySet();
    int find = 5;
    if (st2.find(find) != st2.end())
        st2.erase(st2.find(find));
    ts1.displaySet(st2);

    return 0;
}

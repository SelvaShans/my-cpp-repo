#include <iostream>
#include <vector>
#include <array>

using namespace std;

class TestVector
{
	private:
		vector<int> vec;
        int id;
        string name;

	public:
		TestVector() {}
		TestVector(int y, string chk) {
			id = y;
			name = chk;
		}
		~TestVector() {}

		void setVec(int value)
		{
			vec.push_back(value);
		}

		void resize(int length)
		{
			vec.resize(length);
		}

		void displayVector()
		{
			cout << "Displaying vector vec : " << endl;
			for (auto v:vec)
			{
				cout << v << endl;
			}
			cout << endl;
			cout << "Size of the vector : "<< vec.size() << endl;
			cout << "Capacity of the vector :" << vec.capacity() << endl;
		}

		void shrink()
		{
			vec.shrink_to_fit();
		}
		
		int getId() const
		{
			return id;
		}

		string getName() const
		{
			return name;
		}
};

int main()
{
	TestVector t1;
	
	for (int i = 0; i < 5; ++i)
	{
		t1.setVec(i);
	}
	t1.displayVector();

	t1.resize(4);
	t1.shrink();
	t1.displayVector();


	vector<TestVector> vts;
    TestVector ts(10, "Selva");
    TestVector ts1(11, "Selva1");
    TestVector ts2(12, "Selva2");
    TestVector ts3(13, "Selva3");
    TestVector ts4(14, "Selva4");

    vts.push_back(ts);
    vts.push_back(ts1);
    vts.push_back(ts2);
    vts.push_back(ts3);
    vts.push_back(ts4);

    //for (auto it : vts)
    cout << "ID = " << vts[2].getId() << "\n";  
	cout << "Name = " << vts[2].getName() << "\n";

	return 0;
}
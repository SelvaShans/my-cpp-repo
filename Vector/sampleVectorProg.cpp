#include <iostream>
#include <vector>
#include <array>

using namespace std;

class Test
{
	private:
		vector<int> vec;

	public:
		Test() {}
		~Test() {}

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
};

int main()
{
	Test t1;
	
	for (int i = 0; i < 5; ++i)
	{
		t1.setVec(i);
	}
	t1.displayVector();

	t1.resize(4);
	t1.shrink();
	t1.displayVector();

	return 0;
}
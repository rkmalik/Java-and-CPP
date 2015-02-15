#include "Header.h"

using namespace std;

int main()
{

	HashTable * mytable = new HashTable();

	int key = 10; int value = 1000;

	mytable->put(10, 121);
	mytable->put(20, 131);
	mytable->put(30, 141);
	mytable->put(40, 151);
	mytable->put(50, 161);
	mytable->put(60, 171);
	mytable->put(70, 181);
	mytable->put(80, 191);
	mytable->put(90, 1111);

	cout << 10 << "     " << mytable->get(10) << endl;
	cout << 20 << "     " << mytable->get(20) << endl;
	cout << 30 << "     " << mytable->get(30) << endl;
	cout << 10 << "     " << mytable->get(10) << endl;
	cout << 40 << "     " << mytable->get(40) << endl;
	cout << 50 << "     " << mytable->get(50) << endl;
	cout << 60 << "     " << mytable->get(60) << endl;
	cout << 70 << "     " << mytable->get(70) << endl;
	cout << 90 << "     " << mytable->get(90) << endl;
	cout << 60 << "     " << mytable->get(60) << endl;
	cout << 0  << "     " << mytable->get(0) << endl;


	getchar();

	return 0;
}

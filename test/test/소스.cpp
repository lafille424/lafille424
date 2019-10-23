#include <iostream>
#include "Test.h"
using namespace std;

void main()
{
	CTest* pTest = new CTest;
	pTest->Funtion();
	cout << "hello xxz" << endl;

	delete pTest;
	pTest = nullptr;
}
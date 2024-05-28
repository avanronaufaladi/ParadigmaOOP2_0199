#include <iostream>
using namespace std;

class remoteLampu
{
private:
	string saklarNo[10];

public:
	//untuk mengisi nilai saklar
	void setsaklarNo(int i, string value)
	{
		saklarNo[i] = value;
	}
	//untuk memasukkan nilai saklar
	string getsaklarNo(int i)
	{
		return saklarNo[i];
	}
};

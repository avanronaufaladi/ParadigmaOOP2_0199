#include <iostream>
using namespace std;

class seseorang
{
public:
	//pure virtual function
	virtual void pesan() = 0;
	//virtual function biasa
	//virtual void pesan()
	//{
	// cout << "pesan dari seseorang" << endl;
	//}
};

class joko : public seseorang
{
public:
	//deklarasi
	void pesan()
	{
		//implementasi
		cout << "pesan dari joko" << endl;
	}
};

class lia : public seseorang
{
public:
	void pesan()
	{
		cout << "pesan dari lia" << endl;

	}
};
int main()
{
	seseorang* objek;
	joko a;
	lia b;
	
	objek = &a;
	objek->pesan();
	objek = &b;
	objek->pesan();

	//akses method pesan() dari class seseorang
    // a.sesorang::pesam();

	return 0;

}
#include <iostream>
#include <fstream>
using namespace std;

void test01()
{
	//����������
	ofstream ofs;
	//ָ���򿪷�ʽ
	ofs.open("test.txt", ios::out);
	//д����
	ofs << "����������" << endl;
	ofs << "����������" << endl;
	ofs << "����������" << endl;

	ofs.close();
}

int main()
{
	test01();
	system("pause");
	return 0;
}
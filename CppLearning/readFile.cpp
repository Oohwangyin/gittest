#include <iostream>
#include <fstream>
using namespace std;

void test01()
{
	//创建流对象
	ofstream ofs;
	//指定打开方式
	ofs.open("test.txt", ios::out);
	//写内容
	ofs << "姓名：张三" << endl;
	ofs << "姓名：张三" << endl;
	ofs << "姓名：张三" << endl;

	ofs.close();
}

int main()
{
	test01();
	system("pause");
	return 0;
}
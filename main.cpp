//²âÊÔÎÄ¼ş£»
#include<iostream>
#include<string>
#include"SingleMoney.h"
using namespace std;

int main()
{
	SingleMoney a(234, "CNY"), c(123, "USD"), e(224.23, "JPY"), f(2222, "CAD");
	SingleMoney d = a + c;
	d.showSingleMoney();
	d = a + c + e + f;
	d.showSingleMoney();
	//system("pause");
	return 0;
}
//SingleMoney.h
#ifndef SingleMoney_H
#define SingleMoney_H
#include<string>
using namespace std;
class SingleMoney
{
	string CurrencyTypeNow;//当前货币种类；
	double SingleMoneyAmount;//当前货币金额；
	static int CurrencyTypeAmount;//总的货币类型数量；
public:
	SingleMoney(double single_money, string currency_type_now);

	SingleMoney& operator+(SingleMoney& m);//重载多币种相加，返回结果为当前货币类型；

	void addCurrencyTypeAmount();//用户添加货币种类；

	double findRate(string name);//找到相应货币种类的对人民币汇率；

	double converseCurrency(string DstCurrency);//将货币兑换为目标类型；

	void showSingleMoney();//输出展示当前金额与种类；
};
#endif

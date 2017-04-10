//SingleMoney.h
#ifndef SingleMoney_H
#define SingleMoney_H
#include<string>
using namespace std;

class SingleMoney
{
	string CurrencyTypeNow;//��ǰ�������ࣻ
	double SingleMoneyAmount;//��ǰ���ҽ�
	static int CurrencyTypeAmount;//�ܵĻ�������������
public:
	SingleMoney(double single_money, string currency_type_now);

	SingleMoney operator+(SingleMoney& m);//���ض������ӣ����ؽ��Ϊ��ǰ�������ͣ�
	
	SingleMoney operator-(SingleMoney& m);//�����
	
	SingleMoney operator*(double x);//�ҳˣ�
	
	friend SingleMoney operator*(double x,SingleMoney& m);//��ˣ�����ûʵ���������㣬ֻ�����Ӽ���
														
	bool operator<(SingleMoney& m);
	
	bool operator>(SingleMoney& m);
	
	bool operator<=(SingleMoney& m);
	
	bool operator>=(SingleMoney& m);
	
	void addCurrencyTypeAmount();//�û���ӻ������ࣻ

	double findRate(string name);//�ҵ���Ӧ��������Ķ�����һ��ʣ�

	double converseCurrency(string DstCurrency);//�����Ҷһ�ΪĿ�����ͣ�

	void showSingleMoney();//���չʾ��ǰ��������ࣻ
};
#endif

#include "stdafx.h" 
#include "iostream"
using namespace std;
class CTestCopy
{
	int x;
	int y;
public:
	CTestCopy();
	CTestCopy(int a, int b);
	CTestCopy(CTestCopy & om);
	void setXY(int a, int b);
	void disPlay();
	~CTestCopy();
};
CTestCopy::CTestCopy()
{
	x = 0;
	y = 0;
	cout << "Ĭ�Ϲ��캯�� x=" << x << " y=" << y << endl;
}
CTestCopy::~CTestCopy()
{
	cout << "��������   x=" << x << " y=" << y << endl;
}
CTestCopy::CTestCopy(int a, int b)
{
	x = a;
	y = b;
	cout << "���캯�� x=" << x << " y=" << y << endl;
}
CTestCopy::CTestCopy(CTestCopy & om)
{
	x = om.x * 2;
	y = om.y * 2;
	cout << "���ƹ��캯�� x=" << x << " y=" << y << endl;
}


void CTestCopy::setXY(int a, int b)
{
	x = a;
	y = b;
}
void CTestCopy::disPlay()
{
	cout << "display    x=  " << x << " y= " << y << endl;
}
CTestCopy myTest()
{
	CTestCopy om(600, 700);
	om.disPlay();
	return om;
}
int testtemp(int x)
{
	return x * 2;
}
int main()
{
	CTestCopy ot;
	ot.disPlay();
	ot = myTest();
	ot.disPlay();
	return 0;
}

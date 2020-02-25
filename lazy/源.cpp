#include<iostream>
using namespace std;

int main()
{
	int m = 0, n = 0;
	cout << "first(down): ";
	cin >> m;
	cout << "second(up): ";
	cin >> n;
	unsigned long long int m_li = 1;
	unsigned long int n_li = 1;
	for (int i = 0; i < n; i++)
	{
		m_li = m_li * (m-i);
	}
	while (1)
	{
		n_li = n_li * n;
		n = n - 1;
		if (n==0)
		{
			break;
		}
	}
	unsigned long long int answer = m_li / n_li;
	cout <<"m_li: "<< m_li << endl;
	cout <<"n_li: "<< n_li << endl;
	cout << "ansewr: " << answer << endl;
	system("pause");
}
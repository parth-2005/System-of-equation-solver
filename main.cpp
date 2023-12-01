#include <bits/stdc++.h>
using namespace std;

#define M 10

void PrintMatrix(float a[][M], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}

int PerformOperation(float a[][M], int n)
{
	int i, j, k = 0, c, flag = 0, m = 0;
	float pro = 0;
	for (i = 0; i < n; i++)
	{
		if (a[i][i] == 0)
		{
			c = 1;
			while ((i + c) < n && a[i + c][i] == 0)
				c++;
			if ((i + c) == n)
			{
				flag = 1;
				break;
			}
			for (j = i, k = 0; k <= n; k++)
				swap(a[j][k], a[j + c][k]);
		}

		for (j = 0; j < n; j++)
		{
			if (i != j)
			{
				float pro = a[j][i] / a[i][i];

				for (k = 0; k <= n; k++)
					a[j][k] = a[j][k] - (a[i][k]) * pro;
			}
		}
	}
	return flag;
}

void PrintResult(float a[][M], int n, int flag)
{
	cout << "Result is : ";

	if (flag == 2)
		cout << "Infinite Solutions Exists" << endl;
	else if (flag == 3)
		cout << "No Solution Exists" << endl;

	else
	{
		for (int i = 0; i < n; i++)
			cout << a[i][n] / a[i][i] << " ";
	}
}

int CheckConsistency(float a[][M], int n, int flag)
{
	int i, j;
	float sum;
	flag = 3;
	for (i = 0; i < n; i++)
	{
		sum = 0;
		for (j = 0; j < n; j++)
			sum = sum + a[i][j];
		if (sum == a[i][j])
			flag = 2;
	}
	return flag;
}

int main()
{
	float a[M][M];
	int n, c;
	cout << "Enter Rows & Cols respectively:\n";
	cin >> n >> c;
	cout<< "Enter Matrix:\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> a[i][j];
		}
	}

	cout << "Initial Augmented Matrix is : " << endl;
	PrintMatrix(a, n);

	int flag = 0;

	flag = PerformOperation(a, n);

	if (flag == 1)
		flag = CheckConsistency(a, n, flag);

	cout << "Final Augmented Matrix is : " << endl;
	PrintMatrix(a, n);
	cout << endl;
	PrintResult(a, n, flag);
	cout << endl;

	return 0;
}
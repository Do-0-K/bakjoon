#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
	int N = 0;
	int want = 0;
	int x = 0, y = 0 ;
	int row = -1, col = 0;
	int dir = 1;
	cin >> N;
	int copy = N;
	cin >> want;
	int squared = N * N;

	int** arr;
	arr = new int* [N];

	for (int i = 0; i < N; i++)
	{
		arr[i] = new int[N];
		memset(arr[i], 0, sizeof(int)*N);
	}

	while (squared > 0)
	{
		for (int i = 0; i < copy; i++)
		{
			row = row + dir;
			arr[row][col] = squared;
			if (squared == want)
			{
				x = row + 1;
				y = col + 1;
			}
			squared = squared - 1;
		}

		copy = copy - 1;
		for (int i = 0; i < copy; i++)
		{
			col = col + dir;
			arr[row][col] = squared;
			if (squared == want)
			{
				x = row + 1;
				y = col + 1;
			}
			squared = squared - 1;
		}
		dir = dir * (-1);
	}

	for (int i = 0; i < N * N; i++)
	{
		int r = i / N;
		int c = i % N;
		cout << arr[r][c] << " ";
		if ((i % N) == N - 1) cout << endl;
	}

	cout << x << " " << y << endl;

	for (int i = 0; i < N; i++)
		delete[] arr[i];
	delete[] arr;

	return 0;
}
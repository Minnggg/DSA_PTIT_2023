#include <bits/stdc++.h>
using namespace std;

int count(int x, int Y[], int n, int NoOfY[])
{
	// Nếu x bằng 0 thì không thể có giá trị nào trong Y sao cho
	// mà x^Y[i] > Y[i]^x
	if (x == 0)
		return 0;

	// Nếu x là 1 thì số cặp bằng số
	// số 0 trong Y[]
	if (x == 1)
		return NoOfY[0];
	// Tìm số phần tử trong Y[] có giá trị lớn hơn
	// so với x upper_bound() lấy địa chỉ lớn hơn đầu tiên
	// phần tử trong Y[0..n-1]
	
	int* idx = upper_bound(Y, Y + n, x);
	int ans = (Y + n) - idx;
	// Nếu đã đến đây thì x phải lớn hơn
	// 1, tăng số cặp cho y=0 và y=1
	ans += (NoOfY[0] + NoOfY[1]);
	// Giảm số cặp cho x=2 và (y=4 hoặc y=3)
	
	if (x == 2)
		ans -= (NoOfY[3] + NoOfY[4]);
	// Tăng số cặp cho x=3 và y=2
	if (x == 3)
		ans += NoOfY[2];

	return ans;
}

// Hàm trả về số cặp (x, y) sao cho
// x thuộc về X[], y thuộc về Y[] và x^y > y^x
int countPairs(int X[], int Y[], int m, int n)
{
	// Để lưu trữ các số 0, 1, 2, 3 và 4 trong mảng Y
	int NoOfY[5] = { 0 };
	for (int i = 0; i < n; i++)
		if (Y[i] < 5)
			NoOfY[Y[i]]++;

	// Sắp xếp Y[] để chúng ta có thể thực hiện tìm kiếm nhị phân trong đó
	sort(Y, Y + n);

	int total_pairs = 0; // Khởi tạo kết quả

	// Lấy mọi phần tử của X và đếm các cặp với nó
	for (int i = 0; i < m; i++)
		total_pairs += count(X[i], Y, n, NoOfY);
	return total_pairs;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int m;
		int n;
		cin >> m >>n;
		int X[m],Y[n];
		for(int i=0;i<m;i++) cin>>X[i];
		for(int i=0;i<n;i++) cin>>Y[i];
		cout << countPairs(X, Y, m, n)<<endl;
	}
	
	return 0;
}

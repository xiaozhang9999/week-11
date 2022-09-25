using namespace std;
#include<iostream>

template <typename T>
void ShellSort(T data[], int length)
{
	int h = length / 2;
	while (h >= 1) {
		for (int start = 0; start < h; start++) {
			//��data[start,start+h,start+2h...]���в�������
			for (int i = start+h; i < length; i += h) {
				T t = data[i];
				int j;
				for (j = i; j - h >= 0 && data[j-h] > t; j -= h)
					data[j] = data[j-h];
				data[j ] = t;
			}
		}
		h  /= 2;
	}
}
//�����
template <typename T>
void ShellSort1(T data[], int length)
{
	int h = length / 2;
	while (h >= 1) {
		
			//��d[h...n)���в�������
			for (int i =  h; i < length; i ++) {
				T t = data[i];
				int j;
				for (j = i; j - h >= 0 && data[j - h] > t; j -= h)
					data[j] = data[j - h];
				data[j] = t;
			}
		h /= 2;
	}
}
int main()
{
	int data[] = { 3,5,7,2,4,9,6,1,8 };
	ShellSort1(data, 9);
	for (int e : data) {
		cout << e << " ";
	}
	cout << endl;
}
#include <iostream> 
#include <stdlib.h> 
int main() {

//��ȡ������������������,���ļ�����������Ч����������;
int sum = 0, val = 0;
while (std::cin >> val) {
	sum += val;
}
std::cout << "Sum is" << sum << std::endl;


/*��ʾ��������֮�����������;
int num1 = 0, num2 = 0;
std::cout << "please enter two number!" << std::endl;
std::cin >> num1;
std::cin >> num2;
	if (num1 > num2) {
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}
	while (num1 < num2-1) {
			std::cout << num1+1 << std::endl;
			++num1;
		}*/


		/*�����50��100�ĺ�;
		int sum = 0, val = 50;
		while (val <= 100) {
			sum += val;
			++val;
		}
		std::cout << "sum of 50 to 100 is" << sum << std::endl;*/

		/*ͳ���ظ������ĸ���;
		int currVal = 0, val = 0;
		if (std::cin >> currVal) {
			int cnt = 1;
			while (std::cin >> val) {
				if (val == currVal)
					++cnt;
				else {
					std::cout << currVal << "occurs" << cnt << "times" << std::endl;
					currVal = val;
					cnt = 1;
				}
			}
			std::cout << currVal << "occurs" << cnt << "times" << std::endl;
		}*/

system("pause");
return 0;
}
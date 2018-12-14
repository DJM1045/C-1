#include <iostream> 
#include <stdlib.h> 
int main() {

//读取数量不定的输入数据,用文件结束符或无效输入来结束;
int sum = 0, val = 0;
while (std::cin >> val) {
	sum += val;
}
std::cout << "Sum is" << sum << std::endl;


/*显示两个整数之间的所有整数;
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


		/*计算从50到100的和;
		int sum = 0, val = 50;
		while (val <= 100) {
			sum += val;
			++val;
		}
		std::cout << "sum of 50 to 100 is" << sum << std::endl;*/

		/*统计重复的数的个数;
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
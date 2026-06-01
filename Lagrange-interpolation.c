/*
	这是一段有关打印Hello World的代码
	使用了拉格朗日插值来实现仅需循环即可正确输出字符串的功能
	由于空格，大写字母的ascii码相差太大
	最终的输出是helloworld
	
	This is a piece of code about printing Hello World
	It uses Lagrange interpolation to
	achieve the function of outputting the string correctly with just a loop
	Due to spaces, the ASCII codes of uppercase letters differ too much
	the final output is helloworld
*/

#include<stdio.h>
int main() {
	char resu[11] = { 0 };
	for (int i = 0; i < 10; ++i) {
		resu[i] = \
			- 4 * (i - 1) * (i - 2) * (i - 3) * (i - 4) * (i - 5) * (i - 6) * (i - 7) * (i - 8) * (i - 9) / 362880\
			+ i * (i - 2) * (i - 3) * (i - 4) * (i - 5) * (i - 6) * (i - 7) * (i - 8) * (i - 9) / 40320\
			- 8 * i * (i - 1) * (i - 3) * (i - 4) * (i - 5) * (i - 6) * (i - 7) * (i - 8) * (i - 9) / 10080\
			+ 8 * i * (i - 1) * (i - 2) * (i - 4) * (i - 5) * (i - 6) * (i - 7) * (i - 8) * (i - 9) / 4320\
			- 11 * i * (i - 1) * (i - 2) * (i - 3) * (i - 5) * (i - 6) * (i - 7) * (i - 8) * (i - 9) / 2880\
			+ 19 * i * (i - 1) * (i - 2) * (i - 3) * (i - 4) * (i - 6) * (i - 7) * (i - 8) * (i - 9) / 2880\
			- 11 * i * (i - 1) * (i - 2) * (i - 3) * (i - 4) * (i - 5) * (i - 7) * (i - 8) * (i - 9) / 4320\
			+ 14 * i * (i - 1) * (i - 2) * (i - 3) * (i - 4) * (i - 5) * (i - 6) * (i - 8) * (i - 9) / 10080\
			- 8 * i * (i - 1) * (i - 2) * (i - 3) * (i - 4) * (i - 5) * (i - 6) * (i - 7) * (i - 9) / 40320\
			+ 100;
	}
	printf(resu);
	return 0;
}
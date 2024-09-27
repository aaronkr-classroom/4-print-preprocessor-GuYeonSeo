#include <Stdio.h>
// #include <math.h> //M_PI는 여기에 있어야 하지만 없으면..
#include "clac.h"

//더하기
double sum(double value1, double value2) {
	return value1 + value2;
}

//빼기(sub())
double sub(double value1, double value2) {
	return value1 - value2;
}

//곱하기(mul())
double mul(double value1, double value2) {
	return value1 * value2;
}

//나누기 (div())
double div(double value1, double value2) {
	if (value2 != 0) return value1 / value2;
	else {
		printf("Error : Divide by 0!");
		return 0;
	}
}

//나머지(rem())
int rem(int value1, int value2) {
	if (value2 != 0) return value1 % value2;
	else {
		printf("Error : Divide by 0!");
		return 0;
	}
}

//제곱
double power(double base, double exponent)
{
	return pow(base, exponent);
}

//제곱근
double squareRoot(double num)
{
	if (num >= 0)
		return sqrt(num); //math.h에서 있는 sqrt()함수
	else {
		printf("Error : Negative number!");
		return -1;
	}
}

//넓이
double area0fCircle(double radius)
{
	return M_PI * radius; //M_PI 정의해야 함
}

//둘레
double circumfrence0fCircle(double radius)
{
	return 2 * M_PI * radius;
}


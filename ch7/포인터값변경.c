#include <stdio.h>

int main(void)
{
	int 철수 = 1;
	int 영희 = 2;
	int 민수 = 3;

	// 변수의 주소 출력
	printf("철수네 주소 : %p, 암호 : %d\n", &철수, 철수);
	printf("영희네 주소 : %p, 암호 : %d\n", &영희, 영희);
	printf("민수네 주소 : %p, 암호 : %d\n", &민수, 민수);

	// 포인터 변수의 값 출력
	int* 미션맨;
	미션맨 = &철수;
	printf("미션맨이 방문한 곳의 주소 : %p, 암호 : %d\n", 미션맨, *미션맨);
	미션맨 = &영희;
	printf("미션맨이 방문한 곳의 주소 : %p, 암호 : %d\n", 미션맨, *미션맨);
	미션맨 = &민수;
	printf("미션맨이 방문한 곳의 주소 : %p, 암호 : %d\n", 미션맨, *미션맨);

	// 포인터 변수로 바꾼 값 출력
	미션맨 = &철수;
	*미션맨 = *미션맨 * 3;
	printf("미션맨이 암호를 바꾼 곳의 주소 : %p, 암호 : %d\n", 미션맨, *미션맨);
	미션맨 = &영희;
	*미션맨 = *미션맨 * 3;
	printf("미션맨이 암호를 바꾼 곳의 주소 : %p, 암호 : %d\n", 미션맨, *미션맨);
	미션맨 = &민수;
	*미션맨 = *미션맨 * 3;
	printf("미션맨이 암호를 바꾼 곳의 주소 : %p, 암호 : %d\n", 미션맨, *미션맨);

	return 0;
}
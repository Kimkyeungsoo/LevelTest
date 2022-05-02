#include <iostream>
#include <cmath>

// ①	크기가 다른 원반 n개를 시작 기둥에서 도착 기둥으로 모두 옮겨야 한다.
// ②	원반은 한번에 한 개씩만 옮길수 있다.
// ③	원반을 옮기땐 기둥의 맨 위의 원반부터 옮길수 있다.(중간에 있는 원반은 어떤 경우에도 뽑을수 없다.)
// ④	원반을 쌓을땐 기둥의 맨 위에 쌓아야 한다.(원반과 원반사이에 끼워 넣을수 없다.)
// ⑤	원반을 쌓을땐 큰 원반위에 작은 원반을 올려야 한다.(작은 원반위에 큰 원반을 올릴수 없다.)

// 코드를 복사해왔지만 이해 불가....????????????????

void Hanoi(int num, int a, int b, int c)
{
	if (num == 1) 
	{
		std::cout << a << ' ' << c << std::endl;
		return;
	}
	else 
	{
		Hanoi(num - 1, a, c, b);
		std::cout << a << ' ' << c << std::endl;
		Hanoi(num - 1, b, a, c);
	}
}

int main()
{
	int num = 0;
	std::cin >> num;
	std::cout << (int)pow(2, num) - 1 << std::endl;
	Hanoi(num, 1, 2, 3);

	return 0;
}
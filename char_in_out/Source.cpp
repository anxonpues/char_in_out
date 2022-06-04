#include <conio.h>

void print(const char* s)
{
	for (; *s != 0; s++)
	{
		_putch(*s);
	}
}

int main()
{
	{
		_putch(80);
		_putch(117);
		_putch(98);
		_putch(101);
		_putch(115);
		_putch(33);
		_putch(0);
		_putch('\n');
		_putch('K');
		_putch('a');
		_putch('g');
		_putch('o');
		_putch('n');
		_putch('\'');
		_putch('t');
		_putch('o');
		_putch(' ');
		_putch('d');
		_putch('i');
		_putch('o');
		_putch('s');
		_putch('s');
		_putch(0);
		_putch('\n');
	}
	const char lit[] = { 'P','u','b','b','e','s','!','\n',0 };		// that's a strict C string NULL terminated
	print(lit);
	while (!_kbhit())
	{

	}
	return 0;
}
#include <conio.h>

void print(const char* s)
{
	for (; *s != 0; s++)
	{
		_putch(*s);
	}
}

void read(char* word,const int maxSize)
{
	const char* const pEnd = word + maxSize;
	for (char c = _getch(); c != 13 && (word + 1 < pEnd); c = _getch(), word++)
	{
		_putch(c);
		*word = c;
	}
	*word  = 0;
}

int stringToInt(const char* str)
{
	int wholeN = 0;
	for (char c ='0'; (c >= 48 && c <= 57); c = *str, str++)
	{
		wholeN = wholeN * 10 + (c - 48);
	}
	return wholeN;
}

int fibo(const int ene)
{
	if (ene < 2)
	{
		return(ene);
	}
	else
		return fibo(ene - 1) + fibo(ene-2);
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
	const char lit2[] = "Go damn' it fuck in hell bloody bastard! BULLSHIT !!!\n";
	print(lit2);
	print("Write some shit: ");
	char inbuf[80];
	read(inbuf, 80);
	print ("\nYou wrote this piece of shit:  ");
	print(inbuf);

	print("Write some integer: ");
	char inbuf2[10];
	read(inbuf2, 10);
	int integer = stringToInt(inbuf2);
	print("\nYou wrote this fucking whole number:  ");
	for (int i = 0; i < integer; i++)
		_putch('X');

	int fb = fibo(integer);
	

	while (!_kbhit())
	{

	}
	return 0;
}
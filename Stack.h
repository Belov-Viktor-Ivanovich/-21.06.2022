#pragma once
class Stack
{
	string str;
public:
	Stack(string str)
	{
		this->str = str;

	}
	void Proverka()
	{
		string buf = str;
		bool flag = false;
		int countUp = 0;
		int countOut = 0;
		for (int i = 0; buf[i] != ';'; i++)
		{
			if (buf[i] == '{' || buf[i] == '(' || buf[i] == '[')countUp++;
			if (buf[i] == ')' || buf[i] == '}' || buf[i] == ']')
			{
				countOut++;
				flag = false;
				if (i > 0) {
					for (int j = i - 1; j >= 0; j--)
					{
						if (buf[j] == '{' || buf[j] == '(' || buf[j] == '[')
						{
							if (buf[i] == ')' && buf[j] == '(' || buf[i] == '}' && buf[j] == '{' || buf[i] == ']' && buf[j] == '[')
							{
								flag = true;
								buf[i] = ' ';
								buf[j] = ' ';

							}
						}
					}
					if (!flag)
					{
						cout << " ne vernaya zapicb" << endl;
						for (int j = 0; j <= i; j++)
						{
							cout << str[j];
						}
						break;
					}
				}
			}
		}
		if (flag) {
			if (countUp == countOut)cout << "korectnaya zapisb"<<endl;
			else {
				cout << " ne vernaya zapicb" << endl;
				for (int i = 0; str[i] != ';'; i++)
				{
					cout << str[i];
				}
			}
		}
	}
};


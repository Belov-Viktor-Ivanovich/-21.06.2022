#pragma once
//задание 2
class Queue
{
	float srPas = 0;
	float srMar = 0;
	int sv = 0;
	bool ostanovka;  //конечная или нет
public:
	Queue(float srPas, float srMar, bool ostanovka,int sv=random(1,15))
	{
		this->srPas = srPas;
		this->srMar = srMar;
		this->ostanovka = ostanovka;
		this->sv = sv;
	}
	void srTime()
	{
		cout << "srednee time na ostanovke = " << float(srMar / 2) << endl;
	}
	float dosInter (int n)
	{
		int sv;
		int buf = srPas;
		for (int i = 0; i < 10; i++)
		{
			sv = random(1, 15);
			int count = (buf * srMar) - sv;
			if (count > n)
			{
				for (int j = 0; j < 3; j++)
				{
					sv = random(1, 15);
					count += buf * srMar - sv;
				}
				if (count > n) srMar--;
			}
		}
		return srMar;
	}
};


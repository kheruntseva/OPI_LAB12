#include "guess_num.h"
void Extreme()
{
	rand0
	vi "������������, �� ������� ���� "; vi "'������ �����, �������� ����������'"; nl
	vi "�� ������ ������? ('Y' = ��, 'N' = ���)"; nl
	string y_n = " ";
	vv y_n;
	if (y_n == "Y")
	{
		vi "����� ��������!"; nl
		int x = 0;
		int y = 0;
		x = rand() % 25 + 1;
		vi x; nl
		vi "����� �������� (�������� [1;25]), ������ ������������ ���������? ('Y' = ��, 'N' = ���)"; nl
		y_n = " ";
		vv y_n;
		if (y_n == "Y")
		{
			vi "���� ���������:"; nl
			vi "1 - ������ ������ �� ����� ��� ���"; nl
			if (x % 2 == 0)
			{
				y_n = " ";
				vi "���������� ����� ������"; nl
				vi "������ ������������ ��������� ���������? ('Y' = ��, 'N' = ���)"; nl
				vv y_n;
				if (y_n == "Y")
					{
						vi "���� ���������:"; nl
							vi "2 - ������ � ����� �������� ��������� ����� ��������� ���������� �����"; nl
							if (x > 12)
							{
								y_n = " ";
								vi "���������� ����� �� ������ �������� ���������"; nl
									vi "������� ���� �����"; nl
									vv y;
								if (y == x)
								{
									vi "�����������! �� ������� �����! ������ ��� ���������� � ������ ����. �����!"; nl
								}
								else
								{
									while (y != x)
									{
										vi "���, �� �� �� �������, ���������� ��� ���"; nl
											vv y;
										if (y == x)
										{
											vi "�����������! �� ������� �����! ������ ��� ���������� � ������ ����. �����!"; nl
										}
									}
								}
							}
							else
							{
								vi "���������� ����� � ������ �������� ���������"; nl
									vi "������� ���� �����"; nl
									vv y;
								if (y == x)
								{
									vi "�����������! �� ������� �����! ������ ��� ���������� � ������ ����. �����!"; nl
								}
								else
								{
									while (y != x)
									{
										vi "���, �� �� �� �������, ���������� ��� ���"; nl
											vv y;
										if (y == x)
										{
											vi "�����������! �� ������� �����! ������ ��� ���������� � ������ ����. �����!"; nl
										}
									}
								}
							}
					}
				else
					{
						if (y_n == "N")
						{
							vi "������� ���� �����"; nl
								vv y;
							if (y == x)
							{
								vi "�����������! �� ������� �����! ������ ��� ���������� � ������ ����. �����!"; nl
							}
							else
							{
								while (y != x)
								{
									vi "���, �� �� �� �������, ���������� ��� ���"; nl
										vv y;
									if (y == x)
									{
										vi "�����������! �� ������� �����! ������ ��� ���������� � ������ ����. �����!"; nl
									}
								}
							}
						}
					}
			}
			else
			{
				y_n = " ";
				vi "���������� ����� ��������"; nl
				vi "������ ������������ ��������� ���������? ('Y' = ��, 'N' = ���)"; nl
				vv y_n;
				if (y_n == "Y")
				{
					vi "���� ���������:"; nl
						vi "2 - ������ � ����� �������� ��������� ����� ��������� ���������� �����"; nl
						if (x > 12)
						{
							y_n = " ";
							vi "���������� ����� �� ������ �������� ���������"; nl
							vi "������� ���� �����"; nl
							vv y;
							if (y == x)
							{
								vi "�����������! �� ������� �����! ������ ��� ���������� � ������ ����. �����!"; nl
							}
							else
							{
								while (y != x)
								{
									vi "���, �� �� �� �������, ���������� ��� ���"; nl
									vv y;
									if (y == x)
									{
										vi "�����������! �� ������� �����! ������ ��� ���������� � ������ ����. �����!"; nl
									}
								}
							}
						}
						else
						{
							vi "���������� ����� � ������ �������� ���������"; nl
							vi "������� ���� �����"; nl
							vv y;
							if (y == x)
							{
								vi "�����������! �� ������� �����! ������ ��� ���������� � ������ ����. �����!"; nl
							}
							else
							{
								while (y != x)
								{
									vi "���, �� �� �� �������, ���������� ��� ���"; nl
									vv y;
									if (y == x)
									{
										vi "�����������! �� ������� �����! ������ ��� ���������� � ������ ����. �����!"; nl
									}
								}
							}
						}
				}
				else
				{
					if (y_n == "N")
					{
						vi "������� ���� �����"; nl
						vv y;
						if (y == x)
						{
							vi "�����������! �� ������� �����! ������ ��� ���������� � ������ ����. �����!"; nl
						}
						else
						{
							while (y != x)
							{
								vi "���, �� �� �� �������, ���������� ��� ���"; nl
								vv y;
								if (y == x)
								{
									vi "�����������! �� ������� �����! ������ ��� ���������� � ������ ����. �����!"; nl
								}
							}
						}
					}
				}
			}
		}
		else
		{
			if (y_n == "N")
			{
				vi "������� ���� �����"; nl
				vv y;
				if (y == x)
				{
					vi "�����������! �� ������� �����! ������ ��� ���������� � ������ ����. �����!"; nl
				}
				else
				{
					while (y != x)
					{
						vi "���, �� �� �� �������, ���������� ��� ���"; nl
						vv y;
						if (y == x)
						{
							vi "�����������! �� ������� �����! ������ ��� ���������� � ������ ����. �����!"; nl
						}
					}
				}
			}
		}
	}
	else
	{
		if (y_n == "N")
		{
			vi "���������� ���� ���! �����!"; nl
		}
		else
		{
			vi "�� ����������� ����� ����� =(, ���������� ��� ���"; nl
		}
	}
}
#include <iostream>

int main()
{
	int Size{};
	std::cout << "����� ģ���� �ֳ���";
	std::cin >> Size;

	if (Size <= 0)
	{
		std::cout << "�߸��� ũ���Դϴ�." << std::endl;
		return 0;
	}
	std::string* pFriends = new std::string[Size];

	int longest{ 0 };
	unsigned int maxlen{ 0 };
	for (int i = 0; i < Size; ++i)
	{
		std::cout << "ģ�� �̸� #" << i << ":";
		std::cin >> pFriends[i];
		if (pFriends[i].size() > maxlen)
		{
			maxlen = pFriends[i].size();
			longest = i;
		}
	}
	std::cout << std::endl;
	std::cout << "�̸��� ���� �� ģ���� " << pFriends[longest] << "�Դϴ�.";
	delete[]pFriends;
	return 0;
}
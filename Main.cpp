#include <iostream>

int main()
{
	int Size{};
	std::cout << "몇명의 친구가 있나요";
	std::cin >> Size;

	if (Size <= 0)
	{
		std::cout << "잘못된 크기입니다." << std::endl;
		return 0;
	}
	std::string* pFriends = new std::string[Size];

	int longest{ 0 };
	unsigned int maxlen{ 0 };
	for (int i = 0; i < Size; ++i)
	{
		std::cout << "친구 이름 #" << i << ":";
		std::cin >> pFriends[i];
		if (pFriends[i].size() > maxlen)
		{
			maxlen = pFriends[i].size();
			longest = i;
		}
	}
	std::cout << std::endl;
	std::cout << "이름이 가장 긴 친구는 " << pFriends[longest] << "입니다.";
	delete[]pFriends;
	return 0;
}
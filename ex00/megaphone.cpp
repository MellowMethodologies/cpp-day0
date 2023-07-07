//create a beginner c++ program

#include <iostream>
#include <cstring>

int main(int ac, char **av)
{
	int i;
	int j = 1;
	char r;
	if (ac == 1)
		std::cout<< "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl;
	else
	{
		while(j < ac)
		{
			i = 0;
			while(av[j][i])
			{
				r = toupper(av[j][i++]);
				std::cout << r;
			}
			j++;
		}
		std::cout << std::endl;
	}
}	
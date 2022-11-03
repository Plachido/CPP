#include "harl.hpp"

int find(std::string filter[], std::string search, int opt)
{
    int i = -1;
    while (++i < opt)
    {
        if (filter[i] == search)
            return i;
    }
    return i;
}

int main(int argc, char** argv)
{
	if (argc > 1)
	{
		Harl H;
        std::string filter[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
        int index = find(filter, argv[1], 4);
        while (index < 4)
        {
            std::cout << "[ " <<  filter[index] << " ]" << std::endl;
            H.complain(filter[index++]);
            std::cout << std::endl;
        }
;
	}
	else
		std::cout << "Wrong number of arguments" << std::endl;
}
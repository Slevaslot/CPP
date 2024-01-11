#include <iostream>
#include <string>

int main(int argc, char** argv)
{
	int	j = 0;
	std::string line;
	std::string pushLine;

	(void)argc;
	if (!argv[1])
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (argv[++j])
	{
		line = argv[j];
		for (long unsigned int i = 0; i < line.length(); i++)
		{
			line[i] = std::toupper(line[i]);
		}
		pushLine = pushLine + line;
	}
	std::cout << pushLine << std::endl;
	return (0);
}

#include "browser.h"

int main(int argc, char **argv)
{
	Browser browser(&argc, argv);
	browser.Run();

	return 0;
}
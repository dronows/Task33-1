
#include "Task33.h"

using namespace std;

int main()
{
  std::ofstream file("record.json");
  file << std::setw(4) << film;
  file.close();
	return 0;
}

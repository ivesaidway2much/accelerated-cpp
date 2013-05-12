#include "Rotation.h"

using std::istream; 
using std::vector;

bool compare(const Rotation& foo, const Rotation& bar)
{
  return foo.name < bar.name;
}

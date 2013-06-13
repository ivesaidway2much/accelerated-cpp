#include "Rotation.h"

using std::istream; 
using std::vector;

bool compare(const Rotation& foo, const Rotation& bar)
{//compare two rotations
  return foo.name < bar.name;
}


std::vector<Rotation> create_rotations(const std::string& rot_string)
{//return a vector of rotations based on the string
  
  std::vector<Rotation> rotations;
  Rotation temp_rotation;  
  std::size_t str_sz=rot_string.size();
  std::size_t found=0;
  temp_rotation.startpos=0;
  temp_rotation.endpos=str_sz;
  
  temp_rotation.name=rot_string;

  while (found < str_sz)   
  {// create a rotation for each word in the string, and then add that rotation to the rotations vector.
    //loop invariant all spaces prior to the string position = size_t found have been located
    found=rot_string.find_first_of(" ", found+1);
    temp_rotation.rotationpos=found;
    rotations.push_back(temp_rotation);
  }
    
  
}

std::string rotation_string()
{
}

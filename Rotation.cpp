#include "Rotation.h"

using std::iostream; 
using std::vector;
using std::endl;

bool Rotation::compare(const Rotation& foo, const Rotation& bar)
{//compare two rotations
  return foo.name < bar.name;
}


std::vector<Rotation> Rotation::create_rotations(const std::string& rot_string)
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
    std::cout<< rot_string.substr(found, str_sz - found)<<endl;
    found=rot_string.find_first_of(" ", found+1);
    temp_rotation.rotationpos=found;
    rotations.push_back(temp_rotation);
  }
    
  
}

std::string Rotation::rotation_string()
{
}

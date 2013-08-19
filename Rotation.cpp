#include "Rotation.h"

using std::iostream;
using std::vector;
//using std::endl;

bool Rotation::compare(const Rotation& foo, const Rotation& bar)
{//compare two rotations
  return foo.name < bar.name;
}


std::vector<Rotation> Rotation::create_rotations(const std::string& rot_string)
{//return a vector of rotations based on the string
  
  std::vector<Rotation> rotations;
  Rotation temp_rotation;
  std::size_t str_sz=rot_string.size();
  std::size_t found=rot_string.find_first_of(" ");
  temp_rotation.startpos=0;
  temp_rotation.endpos=str_sz;
  temp_rotation.name=rot_string;

  //  for (std::size_t found=0; found < str_sz; found=rot_string.find_first_of(" ", found+1))
  while (found < str_sz)
  {// create a rotation for each word in the string, and then add that rotation to the rotations vector.
    //loop invariant all spaces prior to the string position = size_t found have been located
    
    //std::cout<< rot_string.substr(found, str_sz - found)<<" "<<found<<std::endl;    
    temp_rotation.rotationpos=found;
    std::cout<<temp_rotation.rotation_string(temp_rotation)<<std::endl;
    rotations.push_back(temp_rotation);
    found=rot_string.find_first_of(" ", found+1);
  }
  if (str_sz != 0)
  {//add the final i.e the full string
    temp_rotation.rotationpos=temp_rotation.endpos;
    rotations.push_back(temp_rotation);
    std::cout<<temp_rotation.rotation_string(temp_rotation)<<std::endl;
  }
  return rotations;    
  
}

std::string Rotation::rotation_string(const Rotation& foo)
{//print out the rotation
  std::cout<<foo.name.size()<<" and "<<foo.rotationpos<<std::endl;
  std::string return_string = foo.name.substr(0, foo.rotationpos) + "\t" + foo.name.substr(foo.rotationpos, foo.name.size() - foo.rotationpos);
  return return_string;
}

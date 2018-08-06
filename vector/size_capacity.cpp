#include <iostream>
#include <vector>

using namespace std;

int main()
 {
 vector<int> vec;
 //The vec: size" is zero, capacity will be allocated space.
 cout << "vec: size: " << vec.size()
 << " capacity: " << vec.capacity() << endl;

// The difference: vec.size()- give back the number of elements in a vector while,
// vec.size()- gives the space allocated for the vector including that unoccupied by elements meant for expanding vector size. 

 for(int i = 0; i < 24; i++) {
 vec.push_back(i);
 cout << "vec: size: " << vec.size()
 << " capacity: " << vec.capacity() << endl;
 }
// The space allocation is done logically to balance between saving memory and reallocation,
//when the vector size exceeds capacity is  the allocator will double the space thereby explaining 
//0 1 2 4 8 16 32 capacity.
 return 0;
 }

// Shape.hpp
//
// Header file for abstract class Shape.  Shape is comprised of an ID.
// Includes standard constructor, copy constructor, assignment operator overload, and destructor.
// Includes getter function for retrieving the id of the shape.
// Includes a virtual function ToString() that returns the id of the Shape as a string.
// Includes abstract function Draw() that must be implemented in derived classes.
// Includes a Print() function that prints shape information to the cout object.
//
// Author: Devon Kaberna
//

#ifndef Shape_HPP
#define Shape_HPP

#include <iostream> // C++ style I/O
using namespace std;

namespace DevonKaberna
{
	namespace CAD
	{
		class Shape
		{
		private:
			// Member data for class shape that contains the ID
			int m_id;	// The ID

		public:
			// Constructors
			Shape(); // Default constructor
			Shape(const Shape& source);	// Copy constructor that copies the id member
			
			Shape& operator = (const Shape& source); // Assignment operator that copies the id member
			virtual ~Shape();	// Destructor

			// Accessing function for ID			
			int ID() const;	// Retrieves the id of the shape
			virtual string ToString() const;	// Returns the id of the Shape as a string
			
			void Print() const;	// Prints shape information to the cout object
			virtual void Draw() const = 0; // Abstract Function Draw must be implemented in derived classes
		};
	}
}
#endif // Shape_HPP
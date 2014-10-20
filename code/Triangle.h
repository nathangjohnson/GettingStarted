/** 
 * @file Triangle.h
 * @brief Class for Triangle data and functionality.
 * @author Student
 * @author Nathan Johnson
 * @date 2014-09-15
 * @version 0.0.1 - initial release
 */

#ifndef TRIANGLE_H
#define	TRIANGLE_H

#include "Shape.h"
#include "Line.h"

/******************************************************************************/
class Triangle : public Shape {
    
    // the above syntax is used to extend the parent class Shape into this child class Triangle
    // check how to properly use public, protected, private with inheritance calls
 
public:
    Triangle();

    float CalculateArea();

protected:     
    //Point m_pointList[3];            /**< Array of Point objects to make the shape. The size of this array is defined at compile time. */
};

#endif	/* TRIANGLE_H */


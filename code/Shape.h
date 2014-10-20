/** 
 * @file Shape.h
 * @brief Base class for Shape data and functionality.
 * @author Student
 * @author Nathan Johnson
 * @date 2014-09-15
 * @version 0.0.1 - initial release
 */

#ifndef SHAPE_H
#define	SHAPE_H

#include "Line.h"

/******************************************************************************/
class Shape {
 
public:
    Shape();
    ~Shape();

    void Initialize();
    void AddPoint( Point point );
    virtual float CalculateArea() {;} /**< This is a "virtual" function to show that it will be overriden in a child class. */

protected:
    Point *m_pointListPointer;      /**< Array of pointers to the Point object. The size of this array is defined during runtime. */

    int m_maxPoints;    /**< Max number of points for the Shape. */
    
private:
    int m_counter;      /**< Counter to indicate next position of open point. */
};

#endif	/* SHAPE_H */


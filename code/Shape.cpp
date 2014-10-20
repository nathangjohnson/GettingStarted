/** 
 * @file Shape.cpp
 * @brief Base class for Shape data and functionality.
 * @author Student
 * @author Nathan Johnson
 * @date 2014-09-15
 * @version 0.0.1 - initial release
 */

#include <cmath>
#include <iostream>

#include "Shape.h"
#include "Line.h"

/**
 * Default constructor.
 */
Shape::Shape() {
    m_pointListPointer = NULL;  // initializing to nothing, you don't want to leave an "empty" pointer
    
    m_counter = 0;
    m_maxPoints = 0;
}

/**
 * Default destructor.
 */
Shape::~Shape() {
    if( m_pointListPointer ) { // check that dynamic memory exists before you try to delete it, otherwise it will cause an error on runtime
        delete m_pointListPointer; // delete any dynamic memory
    }
}

/**
 * Initializes dynamic memory. 
 */
void Shape::Initialize() {
    if(!m_pointListPointer) { // first, to verify that the array hasn't been initialized
        m_pointListPointer = new Point[m_maxPoints];
    }
}

/**
 * Adds a point to the point list. Add points starting with lower-left of the shape and 
 * moving clockwise. 
 * @param point a point on the shape. 
 */
void Shape::AddPoint( Point point ) {
    
    if( m_maxPoints < 1 ) {
        std::cout << "Shape not initialized. No points.\n";
        return;
    }
    
    if( m_counter == m_maxPoints ) {
        std::cout << "Maximum number of points has been reached.\n";
        return;
    }
    
    m_pointListPointer[m_counter] = point;
    
    ++m_counter;
}
/** 
 * @file Triangle.cpp
 * @brief Class for Triangle data and functionality.
 * @author Student
 * @author Nathan Johnson
 * @date 2014-09-15
 * @version 0.0.1 - initial release
 */

#include <cmath>
#include <iostream>

#include "Shape.h"
#include "Triangle.h"
#include "Line.h"

/**
 * Default constructor.
 */
Triangle::Triangle() {    
    m_maxPoints = 3;  // triangles have 3 points
}

/**
 * Calculates area of the triangle.
 * @return area of the triangle.
 */
float Triangle::CalculateArea() {
    // area = (1/2) * base * height
    
    float area = 0;
    float base = 0;
    float height = 0;
    
    base = m_pointListPointer[2].m_x - m_pointListPointer[0].m_x;
    height = m_pointListPointer[1].m_y - m_pointListPointer[0].m_y;
    
    area = 0.5 * base * height;
    
    return(area);
}
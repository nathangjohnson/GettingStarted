/** 
 * @file Line.cpp
 * @brief This file stores information for a line and calculates the line length.
 * @author Student
 * @author Nathan Johnson
 * @date 2014-09-08
 * @version 0.0.1 - initial release
 * @version 0.0.2 - updated commenting style
 */

#include <cmath>

#include "Line.h"

/**
 * Default constructor.
 */
Line::Line() {
    m_point1.Reset();
    m_point2.Reset();
    m_length = 0.0;
}

/**
 * Default destructor.
 */
Line::~Line() {
    m_point1.Reset();
    m_point2.Reset();
    m_length = 0.0;
}

/**
 * Constructor that defines line starting point and ending point.
 * @param point1 starting point of the line.
 * @param point2 ending point of the line. 
 */
Line::Line( Point point1, Point point2 ) {
    m_point1 = point1;
    m_point2 = point2;
}

/**
 * Sets starting point and ending point on the line
 * @param point1 starting point of the line.
 * @param point2 ending point of the line. 
 */
void Line::SetPointsOnLine( Point point1, Point point2 ) {
    m_point1 = point1;
    m_point2 = point2;
}

/**
 * Calculates and returns the length of the line.
 * @return length of the line.
 */
float Line::CalculateLength() {
    m_length = (m_point1.m_x - m_point2.m_x)*(m_point1.m_x - m_point2.m_x) + (m_point1.m_y - m_point2.m_y)*(m_point1.m_y - m_point2.m_y);
    m_length = sqrt(m_length);
    return(m_length);
}
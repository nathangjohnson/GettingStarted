/** 
 * @file Line.h
 * @brief This file stores information for a line and calculates the line length.
 * @author Student
 * @author Nathan Johnson
 * @date 2014-09-08
 * @version 0.0.1 - initial release
 * @version 0.0.2 - updated commenting style
 */

#ifndef LINE_H
#define	LINE_H

/******************************************************************************/
struct Point {
    /**
    * @struct Point [Point.h]
    * @brief Point struct with data on the point and calculations.
    */

public:

    /** Default constructor. */
    Point() {
        m_x = 0.0;
        m_y = 0.0;
    }

    /** Resets coordinates to zero. */
    void Reset() {
        m_x = 0.0;
        m_y = 0.0;
    }
                // this will not get caught by Doxygen
                /* this will not get caught by Doxygen */
    float m_x;  /**< X coordinate of the point. */
    float m_y;  /**< Y coordinate of the point. */
};

/******************************************************************************/
class Line {
 
public:
    Line();
    ~Line();
    Line( Point point1, Point point2 );

    void SetPointsOnLine( Point point1, Point point2 );
    float CalculateLength();

private:
    Point m_point1; /**< Starting point of the line. */
    Point m_point2; /**< Ending point of the line. */
    float m_length; /**< Length of the line. */
};


#endif	/* LINE_H */


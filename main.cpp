/* 
 * File:   main.cpp
 * Author: Nathan
 *
 * Created on September 8, 2014, 8:52 AM
 */

#include <cstdlib>
#include <iostream>

#include "Logger.h"
#include "Line.h"
#include "Triangle.h"

Logger *logger;

using namespace std;

int main(int argc, char** argv) {
    
    std::cout << "test\n";

    std::string outputDirectory("./");
    Logger::Instance()->setLogPath( outputDirectory );
    Logger::Instance()->setWriteLevel( Logger::PROCESS || Logger::ERROR );
    
    int exampleID = 1;
    
    if( exampleID == 0 ) { // 
        // write log to file
        Logger::Instance()->writeToLogFile( std::string("Assigning points to make a line... starting"), Logger::PROCESS );
        Point point1;
        point1.m_x = 2.0;
        point1.m_y = 2.0;

        Point point2;
        point2.m_x = 1.0;
        point2.m_y = 1.0;

        Line myLine;
        myLine.SetPointsOnLine( point1, point2 );

        Logger::Instance()->writeToLogFile( std::string("Assigning points to make a line... DONE!"), Logger::PROCESS );

        Logger::Instance()->writeToLogFile( std::string("Finding length of line... starting"), Logger::PROCESS );

        float length = myLine.CalculateLength();
        std::cout << "length is " << length << "\n";

        Logger::Instance()->writeToLogFile( std::string("Finding length of line... DONE!"), Logger::PROCESS );
    }
    else if( exampleID == 1 ) { // create triangle
        
        // declare and initialize a triangle
        Triangle triangle;
        triangle.Initialize();
        
        Point point1;
        point1.m_x = 1.0;
        point1.m_y = 1.0;

        Point point2;
        point2.m_x = 2.0;
        point2.m_y = 2.0;
        
        Point point3;
        point3.m_x = 3.0;
        point3.m_y = 1.0;
        
        // add points
        Logger::Instance()->writeToLogFile( std::string("Adding points to triangle... starting"), Logger::PROCESS );
        triangle.AddPoint( point1 );
        triangle.AddPoint( point2 );
        triangle.AddPoint( point3 );
        //triangle.AddPoint( point3 ); // try add again, this should return an error
        Logger::Instance()->writeToLogFile( std::string("Adding points to triangle... DONE!"), Logger::PROCESS );
        
        Logger::Instance()->writeToLogFile( std::string("Calculating triangle area... starting"), Logger::PROCESS );
        float area = triangle.CalculateArea();
        std::cout << "Triangle area = " << area << "\n";        
        Logger::Instance()->writeToLogFile( std::string("Calculating triangle area... DONE!"), Logger::PROCESS );
        
    }
    else if( exampleID == 2 ) { // create square
        // TODO: create square
    }

    return 0;
}


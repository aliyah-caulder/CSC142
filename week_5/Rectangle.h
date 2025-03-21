#pragma once

class Rectangle
{
    private:
        double length;
        double width;
    public:
        inline double getLength(){
            return length;
        }
        inline double getWidth(){
            return width;
        }
        inline void setLength(double num){
            length = num;
        }
        inline void setWidth(double num){
            width = num;
        }
        inline double getArea(){
            double area = length * width;
            return area;
        }

};
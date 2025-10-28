#ifndef ELECTRIC_FIELD_H
#define ELECTRIC_FIELD_H

#include <iostream>
#include <cmath>


class Electric_Field {
private:
    double *E;

public:

    Electric_Field() {
        E = new double[3];
        E[0] = E[1] = E[2] = 0.0;
    }


    Electric_Field(double x, double y, double z) {
        E = new double[3];
        E[0] = x;
        E[1] = y;
        E[2] = z;
    }


    ~Electric_Field() {
        delete[] E;
    }

    void setX(double x) { E[0] = x; }
    void setY(double y) { E[1] = y; }
    void setZ(double z) { E[2] = z; }


    double getX() const { return E[0]; }
    double getY() const { return E[1]; }
    double getZ() const { return E[2]; }

    double calculateMagni_farts() const {
        return sqrt(E[0]*E[0] + E[1]*E[1] + E[2]*E[2]);
    }


    double innerproduks() const {
        return E[0]*E[0] + E[1]*E[1] + E[2]*E[2];
    }
};

class Magnetic_Field {
private:
    double *B; 

public:
    
    Magnetic_Field() {
        B = new double[3];
        B[0] = B[1] = B[2] = 0.0;
    }

 
    Magnetic_Field(double x, double y, double z) {
        B = new double[3];
        B[0] = x;
        B[1] = y;
        B[2] = z;
    }


    ~Magnetic_Field() {
        delete[] B;
    }


    void setX(double x) { B[0] = x; }
    void setY(double y) { B[1] = y; }
    void setZ(double z) { B[2] = z; }


    double getX() const { return B[0]; }
    double getY() const { return B[1]; }
    double getZ() const { return B[2]; }


    double calculateMagnitude() const {
        return sqrt(B[0]*B[0] + B[1]*B[1] + B[2]*B[2]);
    }


    void unitVector() const {
        double mag = calculateMagnitude();
        if (mag == 0) {
            std::cout << "Idk i dun fucked up something if this showed up" << std::endl;
            return;
        }

        std::cout << "Unit Vector ("<< B[0]/mag << " "<< B[1]/mag << " "<< B[2]/mag << ")" << std::endl;
    }
};

#endif

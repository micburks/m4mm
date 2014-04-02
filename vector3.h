/*
 * m4mm math library
 * Vector3 derived class prototype
 *
 */

#ifndef M4MM_VECTOR_3_H
#define M4MM_VECTOR_3_H

#include "vector.h"

namespace m4mm {
    template<class Value>
    class Vector3 {

        public:

            //
            // Values
            //



            //
            // Con/Destructors
            //

            // Default constructor
            Vector3<Value>();

            // implicit conversions
            Vector3<Value>(const Value[]* v);
            Vector3<Value> Value*(const Vector<Value>& v);

            // Copy
            Vector3(const Vector<Value>& original);

            // Destructor
            ~Vector3();



            //
            // OPERATORS
            //


            // Vector op Vector algebra
            friend Vector3<Value> operator +(const Vector<Value>& a, const Vector<Value>& b);
            friend Vector3<Value> operator -(const Vector<Value>& a, const Vector<Value>& b);
            friend Vector3<Value> operator /(const Vector<Value>& a, const Vector<Value>& b);
            friend Vector3<Value> operator *(const Vector<Value>& a, const Vector<Value>& b);


            friend Vector3<Value> operator +=(const Vector<Value>& a, const Vector<Value>& b);
            friend Vector3<Value> operator -=(const Vector<Value>& a, const Vector<Value>& b);
            friend Vector3<Value> operator /=(const Vector<Value>& a, const Vector<Value>& b);
            friend Vector3<Value> operator *=(const Vector<Value>& a, const Vector<Value>& b);

 
            friend Vector<Value> operator [](const Vector<Value>& v, const int& i) = 0;



            //
            // GET
            //


            // For getting a single value
            Value reachX();
            Value reachY();
            Value reachZ();
            Value reachW();


            // For getting more than one value... SWIZZLE!1111
            Vector3<Value> reach(const char *swiz_me);



            //
            // Mutating functions
            //



        protected:


            array<Value> values(3);

    }
}

#endif // M4MM_VECTOR_3_H

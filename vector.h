/*
 * m4mm math library
 * Vector pure virtual base class prototype
 *
 */

#ifndef M4MM_VECTOR_H
#define M4MM_VECTOR_H

#include <array>


namespace m4mm {
    template<class Value>
    class Vector {

        public:


            //
            // OPERATORS
            //


            // Vector op Vector algebra
            virtual friend Vector<Value> operator +(const Vector<Value>& a, const Vector<Value>& b) = 0;
            virtual friend Vector<Value> operator -(const Vector<Value>& a, const Vector<Value>& b) = 0;
            virtual friend Vector<Value> operator /(const Vector<Value>& a, const Vector<Value>& b) = 0;
            virtual friend Vector<Value> operator *(const Vector<Value>& a, const Vector<Value>& b) = 0;

            virtual friend Vector<Value> operator +=(const Vector<Value>& a, const Vector<Value>& b) = 0;
            virtual friend Vector<Value> operator -=(const Vector<Value>& a, const Vector<Value>& b) = 0;
            virtual friend Vector<Value> operator /=(const Vector<Value>& a, const Vector<Value>& b) = 0;
            virtual friend Vector<Value> operator *=(const Vector<Value>& a, const Vector<Value>& b) = 0;

            virtual friend Vector<Value> operator [](const Vector<Value>& v, const int& i) = 0;



            //
            // GET
            //


            virtual Vector<Value> reach(const char *swiz_me) = 0;



            //
            // Mutating functions
            //


        //protected:


    }
}

#endif // M4MM_VECTOR_H

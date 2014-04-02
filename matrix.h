/*
 * m4mm math library
 * Matrix pure virtual base class prototype
 *
 */

#ifndef M4MM_MATRIX_H
#define M4MM_MATRIX_H

namespace m4mm {
    template<class Value>
    class Matrix {

        public:

            //
            // Values
            //


            // Cartesian coordinates with homogeneous coordinate
            //Value x, y, z, h;
            // Color values with opacity
            //Value r, g, b, a;
            // Texture coordinates
            //Value s, t, p, q;
            //
            //use array instead
            //Value values[];



            //
            // Con/Destructors
            //

            // Default constructor
            virtual Matrix<Value>() = 0;

            // implicit conversions
            virtual Matrix<Value>(const Value[]* v);
            virtual Matrix<Value> Value*(const Vector<Value>& v);

            // Copy
            virtual Matrix(const Vector<Value>& original);

            // Destructor
            virtual ~Matrix();



            //
            // OPERATORS
            //


            // Vector op Vector algebra
            virtual Matrix<Value> operator +(const Vector<Value>& a, const Vector<Value>& b) = 0;
            virtual Matrix<Value> operator -(const Vector<Value>& a, const Vector<Value>& b) = 0;
            virtual Matrix<Value> operator /(const Vector<Value>& a, const Vector<Value>& b) = 0;
            virtual Matrix<Value> operator *(const Vector<Value>& a, const Vector<Value>& b) = 0;


            // Matrix * Vector
            virtual Matrix<Value> operator *(const Matrix<Value>& m, const Vector<Value>& v) = 0;
            // Vector * Matrix
            virtual Matrix<Value> operator *(const Vector<Value>& v, const Matrix<Value>& m) = 0;



            //
            // GET
            //


            // For getting a single value
            //virtual Value reachX|Y|Z|A|etc();
            // For getting more than one value... SWIZZLE!1111
            virtual Matrix<Value> reach(const char *swiz_me) = 0;



            //
            // Mutating functions
            //



        protected:


    }
}

#endif // M4MM_MATRIX_H



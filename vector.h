/*
 * m4mm math library
 * Vector virtual base class prototype
 *
 */

#ifndef M4MM_VECTOR_H
#define M4MM_VECTOR_H

namespace m4mm {
    template<class Value>
    class Vector {

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
            virtual Vector<Value>();

            // implicit conversions
            virtual Vector<Value>(const Value[]* v);
            virtual Vector<Value> Value*(const Vector<Value>& v);

            // Copy
            virtual Vector(const Vector<Value>& original);

            // Destructor
            virtual ~Vector();



            //
            // OPERATORS
            //


            // Vector op Vector algebra
            virtual Vector<Value> operator+(const Vector<Value>& a, const Vector<Value>& b);
            virtual Vector<Value> operator-(const Vector<Value>& a, const Vector<Value>& b);
            virtual Vector<Value> operator/(const Vector<Value>& a, const Vector<Value>& b);
            virtual Vector<Value> operator*(const Vector<Value>& a, const Vector<Value>& b);


            // Matrix * Vector
            virtual Vector<Value> operator*(const Matrix<Value>& m, const Vector<Value>& v);
            // Vector * Matrix
            virtual Vector<Value> operator*(const Vector<Value>& v, const Matrix<Value>& m);



            //
            // GET
            //


            // For getting a single value
            //virtual Value reachX|Y|Z|A|etc();
            // For getting more than one value... SWIZZLE!1111
            virtual Vector<Value> reach(const char *swiz_me);



            //
            // Mutating functions
            //


            // Look at
            virtual Vector<Value> stare(const Vector<Value> &eye, const Vector<Value> &center, const Vector<Value> &up);
            // Orbit
            virtual Vector<Value> twist(const Vector<Value> &position, const Vector<Value> &center, const Vector<Value> &axis);
            // Pan
            virtual Vector<Value> push(const Vector<Value> &vector, const Vector<Value> &direction);
            // Rotate
            virtual Vector<Value> spin(const Vector<Value> &position, const Vector<Value> &axis);

        private:


    }
}

#endif // M4MM_VECTOR_H

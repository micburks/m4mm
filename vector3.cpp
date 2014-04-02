

//
// Con/Destructors
//

// Default constructor
template<class Value>
Vector3::Vector3<Value>(): values(array<Value>(3) {}

// implicit conversions
template<class Value>
Vector3<Value>(const Value[] &v) {
    int length = sizeof(v) / sizeof(v[0]);
    values = array<Value>(length, v);
}


template<class Value>
using arr = Value[3];
Vector3<Value> Value*(const Vector<Value>& v) {
    return {x, y, z};
}

// Copy

template<class Value>
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

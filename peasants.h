
#ifndef M4MM_PEASANTS_H
#define M4MM_PEASANTS_H

#include "vector3.h"
#include "vector4.h"

// Look at
Vector3<Value> stare(const Vector<Value> &eye, const Vector<Value> &center, const Vector<Value> &up);
// Orbit
Vector3<Value> orbit(const Vector<Value> &position, const Vector<Value> &center, const Vector<Value> &axis);
// Pan
Vector3<Value> pan(const Vector<Value> &vector, const Vector<Value> &direction);
// Rotate
Vector3<Value> rotate(const Vector<Value> &position, const Vector<Value> &axis);



#endif // M4MM_PEASANTS_H


#ifndef TESTING_DEMO_VECTOR3_HPP
#define TESTING_DEMO_VECTOR3_HPP

class Vector3 {
    
public:
    
    float x, y, z;

    Vector3(float x, float y, float z) : x(x), y(y), z(z) {}
    
    Vector3 add(const Vector3& other) {
        
        return {x + other.x, y + other.y, z + other.z};
    }
    
};

#endif//TESTING_DEMO_VECTOR3_HPP

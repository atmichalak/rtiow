//
// Created by atm on 5/6/21.
//

#ifndef RTIOW_HITTABLE_HPP
#define RTIOW_HITTABLE_HPP

#include "ray.hpp"
#include "rtweekend.hpp"

class material;

struct hit_record {
    point3 p;
    vec3 normal;
    shared_ptr<material> mat_ptr;
    double t;
    bool front_face;

    inline void set_face_normal(const ray& r, const vec3& outward_normal) {
        front_face = dot(r.direction(), outward_normal) < 0;
        normal = front_face ? outward_normal :-outward_normal;
    }
};

class hittable {
public:
    virtual bool hit(const ray& r, double t_min, double t_max, hit_record& rec) const = 0;
};


#endif //RTIOW_HITTABLE_HPP

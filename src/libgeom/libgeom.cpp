#include "pch.h"
#include "../include/libgeom.h"

bool AABB::isCollide(const AABB& a, const AABB& b)
{
	//if(a.max[0]<b.min[0]||b.max[0]<a.min[0])return false;
	//if(a.max[1]<b.min[1]||b.max[1]<a.min[1])return false;
	//if(a.max[2]<b.min[2]||b.max[2]<a.min[2])return false;
	return a.min_[0]<a.max_[0];
}

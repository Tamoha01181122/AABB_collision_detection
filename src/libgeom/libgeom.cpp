#include "pch.h"
#include "../include/libgeom.h"
#include <algorithm>

bool AABB::isCollide(const AABB& a, const AABB& b)
{
	
	if(std::min(a.max_[0].b.max_[0])<std::max(a.min_[0].b.min_[0]))return false;
	if(std::min(a.max_[1].b.max_[1])<std::max(a.min_[1].b.min_[1]))return false;
	if(std::min(a.max_[2].b.max_[2])<std::max(a.min_[2].b.min_[2]))return false;
	
	return true;
}

#include "pch.h"
#include "../include/libgeom.h"

bool AABB::isCollide(const AABB& a, const AABB& b)
{
	
	if(a.max_[0]<b.min_[0]||a.max_[0]<b.min_[0])return false;
	if(a.max_[1]<b.min_[1]||a.max_[1]<b.min_[1])return false;
	if(a.max_[2]<b.min_[2]||a.max_[2]<b.min_[2])return false;
	
	
	return true;
}

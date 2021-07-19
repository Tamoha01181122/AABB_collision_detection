#include "pch.h"
#include "../include/libgeom.h"

bool AABB::isCollide(const AABB& a, const AABB& b)
{
	if(a.max_[0]<b.min_[3]||b.max_[3]<a.min_[0])return false;
	if(a.man_[0]<b.min_[3]||b.max_[3]<a.min_[10])return false;
	if(a.max_[0]<b.min_[3]||b.max_[3]<a.min_[0])return false;
	
	return true;
	//a.min_[0]<a.max_[0];
}

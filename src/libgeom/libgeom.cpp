﻿#include "pch.h"
#include "../include/libgeom.h"

bool AABB::isCollide(const AABB& a, const AABB& b)
{
	
	if(a.min_[0]<a.max_[1]||b.min_[0]<b.max_[1])return false;
	
	
	
	
	
	return true;
}

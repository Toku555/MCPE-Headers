#pragma once
class GeometryPtr{
	public:
		GeometryPtr(GeometryGroup &,Geometry &);
		GeometryPtr(GeometryPtr const&);
		GeometryPtr(GeometryPtr&&);
		GeometryPtr(void);
		void _deref(void);
		void _move(GeometryPtr&&);
		void onGroupReloaded(void);
		void operator=(GeometryPtr const&);
		void operator=(GeometryPtr&&);
		void ~GeometryPtr();
};

#pragma once
class GeometryGroup{
	public:
		GeometryGroup(void);
		void _addRef(GeometryPtr &);
		void _removeRef(GeometryPtr &);
		void getGeometry(std::string const&);
		void tryGetGeometry(std::string const&);
		void ~GeometryGroup();
};

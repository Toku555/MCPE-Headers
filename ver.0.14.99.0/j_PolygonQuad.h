#pragma once
namespace j{
	class PolygonQuad{
		public:
		void compile(Tessellator &,float);
		void expandAABB(AABB &);
	}
};

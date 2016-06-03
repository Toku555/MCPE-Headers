#pragma once
namespace j{
	class AABB{
		public:
		void centerAt(Vec3 const&);
		void expand(Vec3 const&);
		void set(AABB const&);
		void set(AABB const&);
		void set(Vec3 const&,Vec3 const&);
		void set(Vec3 const&,Vec3 const&);
	}
};

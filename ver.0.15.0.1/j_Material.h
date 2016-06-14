#pragma once
namespace j{
	class Material{
		public:
		void _setupSurfaceMaterials(void);
		void isFlammable(void);
		void isType(MaterialType);
		void operator!=(Material const&);
	}
};

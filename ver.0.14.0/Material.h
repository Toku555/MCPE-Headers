#pragma once
class Material{
	public:
		Material(MaterialType,Material::Settings,float);
		void _setFlammable(void);
		void _setMapColor(Color const&);
		void _setNeverBuildable(void);
		void _setNotAlwaysDestroyable(void);
		void _setNotBlockingMotion(void);
		void _setNotSolid(void);
		void _setReplaceable(void);
		void _setSuperHot(void);
		void _setupSurfaceMaterials(void);
		void addMaterial(std::unique_ptr<Material,std::default_delete<Material>>);
		void getBlocksMotion(void);
		void getColor(void);
		void getMaterial(MaterialType);
		void getTranslucency(void);
		void initMaterials(void);
		void isAlwaysDestroyable(void);
		void isFlammable(void);
		void isLiquid(void);
		void isNeverBuildable(void);
		void isReplaceable(void);
		void isSolid(void);
		void isSolidBlocking(void);
		void isSuperHot(void);
		void isType(MaterialType);
		void operator!=(Material const&);
		void operator==(Material const&);
		void teardownMaterials(void);
		void ~Material();
};

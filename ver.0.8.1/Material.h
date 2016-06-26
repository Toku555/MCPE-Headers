#pragma once
class Material{
	public:
		Material(void);
		void blocksLight(void);
		void blocksMotion(void);
		void initMaterials(void);
		void isAlwaysDestroyable(void);
		void isFlammable(void);
		void isLiquid(void);
		void isReplaceable(void);
		void isSolid(void);
		void isSolidBlocking(void);
		void letsWaterThrough(void);
		void teardownMaterials(void);
		void ~Material();
		void ~Material();
};

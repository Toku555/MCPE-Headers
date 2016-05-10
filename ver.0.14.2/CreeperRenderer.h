#pragma once
class CreeperRenderer{
	public:
		CreeperRenderer(mce::TextureGroup &,GeometryGroup &);
		void _getOverlayColor(Entity &,float);
		void prepareArmor(Mob &,ArmorSlot,float);
		void scale(Mob &,Matrix &,float);
		void ~CreeperRenderer();
		void ~CreeperRenderer();
};

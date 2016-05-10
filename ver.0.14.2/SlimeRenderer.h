#pragma once
class SlimeRenderer{
	public:
		SlimeRenderer(mce::TextureGroup &);
		void prepareArmor(Mob &,ArmorSlot,float);
		void render(Entity &,Vec3 const&,float,float);
		void scale(Mob &,Matrix &,float);
		void ~SlimeRenderer();
		void ~SlimeRenderer();
};

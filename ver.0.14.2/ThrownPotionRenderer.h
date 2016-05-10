#pragma once
class ThrownPotionRenderer{
	public:
		ThrownPotionRenderer(mce::TextureGroup &,Item *);
		void getIcon(Entity &);
		void isFoil(Entity const&);
		void onAppSuspended(void);
		void render(Entity &,Vec3 const&,float,float);
		void ~ThrownPotionRenderer();
		void ~ThrownPotionRenderer();
};

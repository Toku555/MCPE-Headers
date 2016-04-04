#pragma once
class TakeAnimationParticle{
	public:
		TakeAnimationParticle(Level &,ItemEntity const&,Entity &,Vec3);
		void isRemoved(void);
		void normalTick(void);
		void render(Vec3,float);
		void ~TakeAnimationParticle();
		void ~TakeAnimationParticle();
};

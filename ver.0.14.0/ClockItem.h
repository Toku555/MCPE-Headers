#pragma once
class ClockItem{
	public:
		ClockItem(std::string const&,int);
		void SpriteCalculator(void);
		void calculateFrame(BlockSource const&,Vec3 const&);
		void calculateFrame(Entity const&);
		void getFrame(void);
		void update(BlockSource const&,Vec3 const&,bool);
		void update(Entity &,bool);
		void getAnimationFrameFor(Mob &);
		void getIcon(int,int,bool);
		void ~ClockItem();
		void ~ClockItem();
};

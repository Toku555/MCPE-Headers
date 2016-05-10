#pragma once
class CompassItem{
	public:
		CompassItem(std::string const&,int);
		void SpriteCalculator(void);
		void calculateFrame(BlockSource const&,Vec3 const&,float);
		void calculateFrame(BlockSource const&,float,float,float);
		void getFrame(void);
		void update(Entity &,bool);
		void updateFromPosition(BlockSource const&,float,float,float,bool);
		void getAnimationFrameFor(Mob &);
		void getIcon(int,int,bool);
		void ~CompassItem();
		void ~CompassItem();
};

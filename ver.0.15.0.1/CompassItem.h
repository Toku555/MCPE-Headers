#pragma once
class CompassItem{
	public:
		CompassItem(std::string const&,int);
		CompassItem(std::string const&,int);
		void SpriteCalculator(void);
		void SpriteCalculator(void);
		void calculateFrame(BlockSource const&,Vec3 const&,float);
		void calculateFrame(BlockSource const&,float,float,float);
		void getFrame(void);
		void getFrame(void);
		void update(Entity &,bool);
		void update(Entity &,bool);
		void updateFromPosition(BlockSource const&,float,float,float,bool);
		void updateFromPosition(BlockSource const&,float,float,float,bool);
		void getAnimationFrameFor(Mob &);
		void getAnimationFrameFor(Mob &);
		void getIcon(int,int,bool);
		void getIcon(int,int,bool);
		void populateFrames(TextureData const&);
		void populateFrames(TextureData const&);
		void ~CompassItem();
		void ~CompassItem();
		void ~CompassItem();
		void ~CompassItem();
};

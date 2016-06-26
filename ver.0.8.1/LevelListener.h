#pragma once
class LevelListener{
	public:
		void addParticle(ParticleType,float,float,float,float,float,float,int);
		void allChanged(void);
		void entityAdded(Entity *);
		void entityRemoved(Entity *);
		void levelEvent(Player *,int,int,int,int,int);
		void playMusic(std::string const&,float,float,float,float);
		void playSound(std::string const&,float,float,float,float,float);
		void playStreamingMusic(std::string const&,int,int,int);
		void setTilesDirty(int,int,int,int,int,int);
		void skyColorChanged(void);
		void takePicture(TripodCamera *,Entity *);
		void tileBrightnessChanged(int,int,int);
		void tileChanged(int,int,int);
		void tileEntityChanged(int,int,int,TileEntity *);
		void tileEvent(int,int,int,int,int);
		void ~LevelListener();
		void ~LevelListener();
};

#pragma once
class LevelListener{
	public:
		void addParticle(ParticleType,Vec3 const&,Vec3 const&,int);
		void allChanged(void);
		void levelEvent(LevelEvent,Vec3 const&,int);
		void onEntityAdded(Entity &);
		void onEntityRemoved(Entity &);
		void onNewChunkFor(Player &,LevelChunk &);
		void playMusic(std::string const&,Vec3 const&,float);
		void playSound(std::string const&,Vec3 const&,float,float);
		void playStreamingMusic(std::string const&,int,int,int);
		void takePicture(Entity *,Entity *,bool,std::string const&);
		void ~LevelListener();
		void ~LevelListener();
};

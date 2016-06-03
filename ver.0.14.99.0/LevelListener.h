#pragma once
class LevelListener{
	public:
		void addParticle(ParticleType,Vec3 const&,Vec3 const&,int);
		void addParticle(ParticleType,Vec3 const&,Vec3 const&,int);
		void allChanged(void);
		void allChanged(void);
		void levelEvent(LevelEvent,Vec3 const&,int);
		void levelEvent(LevelEvent,Vec3 const&,int);
		void onEntityAdded(Entity &);
		void onEntityAdded(Entity &);
		void onEntityRemoved(Entity &);
		void onEntityRemoved(Entity &);
		void onNewChunkFor(Player &,LevelChunk &);
		void onNewChunkFor(Player &,LevelChunk &);
		void playMusic(std::string const&,Vec3 const&,float);
		void playMusic(std::string const&,Vec3 const&,float);
		void playSound(Entity const&,EntityLocation,std::string const&,float,float);
		void playSound(Entity const&,EntityLocation,std::string const&,float,float);
		void playSound(std::string const&,Vec3 const&,float,float);
		void playSound(std::string const&,Vec3 const&,float,float);
		void playStreamingMusic(std::string const&,int,int,int);
		void playStreamingMusic(std::string const&,int,int,int);
		void takePicture(TextureData &,Entity *,Entity *,bool,std::string const&);
		void takePicture(TextureData &,Entity *,Entity *,bool,std::string const&);
		void ~LevelListener();
		void ~LevelListener();
};

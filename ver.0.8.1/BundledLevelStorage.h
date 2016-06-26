#pragma once
class BundledLevelStorage{
	public:
		BundledLevelStorage(Minecraft *,std::string const&);
		void createChunkStorage(Dimension *);
		void freeChunkData(int,int,BinaryBlob *);
		void getChunkData(int,int);
		void load(Level *,int,int);
		void load(Player *);
		void prepareLevel(Level *);
		void save2(Level *,LevelChunk *);
		void ~BundledLevelStorage();
		void ~BundledLevelStorage();
};

#pragma once
class FlatLevelSource{
	public:
		FlatLevelSource(Level *,Dimension *,std::string const&);
		void loadChunk(LevelChunk &);
		void postProcess(ChunkViewSource &);
		void requestChunk(ChunkPos const&,ChunkSource::LoadMode);
		void ~FlatLevelSource();
		void ~FlatLevelSource();
};

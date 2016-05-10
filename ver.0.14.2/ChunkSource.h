#pragma once
class ChunkSource{
	public:
		ChunkSource(ChunkSource&);
		ChunkSource(Level *,Dimension *,int);
		ChunkSource(std::unique_ptr<ChunkSource,std::default_delete<ChunkSource>>);
		void _fireChunkLoaded(LevelChunk &);
		void _getChunkPriority(LevelChunk const&);
		void _startPostProcessingArea(LevelChunk &);
		void acquireDiscarded(std::unique_ptr<LevelChunk,std::default_delete<LevelChunk>> &&);
		void compact(void);
		void discard(LevelChunk &);
		void discard(std::unique_ptr<LevelChunk,std::default_delete<LevelChunk>> &);
		void getAvailableChunk(ChunkPos const&);
		void getAvailableChunkAt(BlockPos const&);
		void getChunkSide(void);
		void getDimension(void);
		void getExistingChunk(ChunkPos const&);
		void getGeneratedChunk(ChunkPos const&);
		void getLevel(void);
		void getMobsAt(BlockSource &,EntityType,BlockPos const&);
		void getParent(void);
		void getStoredChunks(void);
		void getStoredChunks(void);
		void function<void ();
		void hintDiscardBatchBegin(void);
		void hintDiscardBatchEnd(void);
		void loadChunk(LevelChunk &);
		void postProcess(ChunkViewSource &);
		void postProcessMobsAt(BlockSource *,int,int,Random &);
		void releaseChunk(LevelChunk &);
		void requestChunk(ChunkPos const&,ChunkSource::LoadMode);
		void saveLiveChunk(LevelChunk &);
		void waitDiscardFinished(void);
		void ~ChunkSource();
		void ~ChunkSource();
};

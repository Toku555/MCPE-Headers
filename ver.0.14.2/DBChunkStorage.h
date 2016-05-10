#pragma once
class DBChunkStorage{
	public:
		DBChunkStorage(std::unique_ptr<ChunkSource,std::default_delete<ChunkSource>>,DBStorage *);
		void _getBuffer(void);
		void acquireDiscarded(std::unique_ptr<LevelChunk,std::default_delete<LevelChunk>> &&);
		void getStats(void);
		void hintDiscardBatchBegin(void);
		void hintDiscardBatchEnd(void);
		void loadChunk(LevelChunk &);
		void onLowMemory(void);
		void postProcess(ChunkViewSource &);
		void waitDiscardFinished(void);
		void ~DBChunkStorage();
		void ~DBChunkStorage();
};

#pragma once
namespace j{
	class ServerPlayer{
		public:
		void doDeleteContainerManager(void);
		void queueChunk(LevelChunk &);
		void setRequestedChunkRadius(int);
	}
};

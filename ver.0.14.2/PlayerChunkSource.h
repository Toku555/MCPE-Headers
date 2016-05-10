#pragma once
class PlayerChunkSource{
	public:
		PlayerChunkSource(Player &,ChunkSource &,int);
		void center(float);
		void getRadius(void);
		void setRadius(int);
		void suspend(void);
		void ~PlayerChunkSource();
};

#pragma once
class RenderChunk{
	public:
		RenderChunk(Level *,int,int,int,int,int);
		void distanceToSqr(Entity const*);
		void getAllLists(int *,int,int);
		void getList(int);
		void getRenderChunk(int);
		void isDirty(void);
		void rebuild(void);
		void renderBB(void);
		void reset(void);
		void resetUpdates(void);
		void setClean(void);
		void setDirty(void);
		void setPos(int,int,int);
		void squishedDistanceToSqr(Entity const*);
		void translateToPos(void);
};

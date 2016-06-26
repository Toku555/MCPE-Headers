#pragma once
class FenceTile{
	public:
		void connectsTo(LevelSource *,int,int,int);
		void getAABB(Level *,int,int,int);
		void getRenderShape(void);
		void isCubeShaped(void);
		void isSolidRender(void);
		void mayPlace(Level *,int,int,int);
		void updateShape(LevelSource *,int,int,int);
		void ~FenceTile();
		void ~FenceTile();
};

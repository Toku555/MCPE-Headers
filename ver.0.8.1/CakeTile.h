#pragma once
class CakeTile{
	public:
		CakeTile(int);
		void canSurvive(Level *,int,int,int);
		void getResourceCount(Random *);
		void getTexture(int,int);
		void isCubeShaped(void);
		void isSolidRender(void);
		void mayPlace(Level *,int,int,int,uchar);
		void neighborChanged(Level *,int,int,int,int,int,int,int);
		void updateDefaultShape(void);
		void updateShape(LevelSource *,int,int,int);
		void use(Level *,int,int,int,Player *);
		void ~CakeTile();
		void ~CakeTile();
};

#pragma once
class WorldSelectionList{
	public:
		WorldSelectionList(Minecraft *,int,int);
		void capXPosition(void);
		void commit(void);
		void getNumberOfItems(void);
		void getPos(float);
		void isSelectedItem(int);
		void renderBackground(void);
		void renderItem(int,int,int,int,Tesselator &);
		void selectItem(int,bool);
		void stepLeft(void);
		void stepRight(void);
		void tick(void);
		void touched(void);
		void tweenInited(void);
		void ~WorldSelectionList();
		void ~WorldSelectionList();
};

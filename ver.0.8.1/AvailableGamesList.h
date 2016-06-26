#pragma once
class AvailableGamesList{
	public:
		void getNumberOfItems(void);
		void isSelectedItem(int);
		void renderBackground(void);
		void renderItem(int,int,int,int,Tesselator &);
		void selectItem(int,bool);
		void ~AvailableGamesList();
		void ~AvailableGamesList();
};

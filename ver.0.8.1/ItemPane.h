#pragma once
class ItemPane{
	public:
		ItemPane(IItemPaneCallback *,Textures *,IntRectangle const&,int,int,int,bool);
		void drawScrollBar(ScrollBar &);
		void onSelect(int,bool);
		void renderBatch(std::vector<ScrollingPane::GridItem,std::allocator<ScrollingPane::GridItem>> &,float,float,float);
		void ~ItemPane();
		void ~ItemPane();
};

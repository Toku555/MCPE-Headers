#pragma once
class ItemPane{
	public:
		ItemPane(IItemPaneCallback *,mce::TextureGroup *,IntRectangle const&,int,int,int,bool);
		void drawScrollBar(ScrollBar &);
		void onSelect(int,bool);
		void onSelect(int,bool);
		void renderBatch(std::vector<ScrollingPane::GridItem,std::allocator<ScrollingPane::GridItem>> &,float,float,float);
		void renderBatch(std::vector<ScrollingPane::GridItem,std::allocator<ScrollingPane::GridItem>> &,float,float,float);
		void setControllerDirection(StickDirection);
		void ~ItemPane();
		void ~ItemPane();
		void ~ItemPane();
		void ~ItemPane();
};

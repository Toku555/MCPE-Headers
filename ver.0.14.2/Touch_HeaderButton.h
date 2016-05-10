#pragma once
namespace Touch{
	class HeaderButton{
		public:
		void HeaderButton(int,MinecraftClient &,std::string const&,bool,bool);
		void setMsg(std::string const&);
		void ~HeaderButton();
		void ~HeaderButton();
		void ~IInventoryPaneCallback();
		void ~IInventoryPaneCallback();
		void InventoryPane(Touch::IInventoryPaneCallback *,MinecraftClient &,IntRectangle const&,int,float,int,int,int,bool,bool,bool);
		void SetAdditionalMargin(int,int);
		void buildInventoryItemsChunk(std::vector<ItemInstance const*,std::allocator<ItemInstance const*>> &,ItemRenderChunkType);
		void drawRectangleOnSelectedItem(ScrollingPane::GridItem &);
		void handleButtonPress(MinecraftClient *,short);
		void onAppResumed(void);
		void onAppSuspended(void);
		void onSelect(int,bool);
		void onSelectItem(void);
		void refreshItems(void);
		void renderSelectedItem(std::vector<ScrollingPane::GridItem,std::allocator<ScrollingPane::GridItem>> &,std::vector<ItemInstance const*,std::allocator<ItemInstance const*>>,Tessellator &,ScrollingPane::GridItem*&,float &,float &);
		void setControllerDirection(StickDirection);
		void setRenderDecorations(bool);
		void tick(void);
		void ~InventoryPane();
		void ~InventoryPane();
		void TButton(int,int,int,int,int,std::string const&,MinecraftClient *,bool,int);
		void TButton(int,int,int,std::string const&,MinecraftClient *,int);
		void TButton(int,std::string const&,MinecraftClient *,bool,int);
		void init(MinecraftClient *);
		void init(MinecraftClient *,std::string const&,IntRectangle const&,IntRectangle const&,int,int,int,int);
		void renderBg(MinecraftClient *,int,int);
		void ~TButton();
		void ~TButton();
		void THeader(int,int,int,int,int,std::string const&);
		void THeader(int,int,int,std::string const&);
		void THeader(int,std::string const&);
		void render(MinecraftClient *,int,int);
		void renderBg(MinecraftClient *,int,int);
		void ~THeader();
		void ~THeader();
		TouchDeleteWorldScreen(MinecraftClient &,LevelSummary const&);
		void _postResult(bool);
		void ~TouchDeleteWorldScreen();
		void ~TouchDeleteWorldScreen();
	}
};

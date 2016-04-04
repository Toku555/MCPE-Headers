#pragma once
class SkinsPaneStandard{
	public:
		void function<void ();
		SkinsPaneStandard(Options const&,SkinRepository &,TextureGroup &,bool,MinecraftClient &,std::string const&,bool);
		void _selectSkinInDirection(StickDirection);
		void addCustomSkinButton(Options const&,SkinRepository const&,TextureGroup &);
		void addSkinPackButton(SkinRepository const&,TextureGroup &,Skin const&);
		void addSkinPackSkinButton(SkinRepository const&,TextureGroup &,Skin const&);
		void addSkinPane(std::vector<std::shared_ptr<SkinsButton>,std::allocator<std::shared_ptr<SkinsButton>>> const&,int &,int &,int);
		void addStandardSkinButton(SkinRepository const&,TextureGroup &,Skin const&);
		void createSkinButton(SkinRepository const&,Skin const&,SkinsButton **,TextureGroup &,bool,bool,bool,bool);
		void getButtonForGridPosition(int,int);
		void getGridPositionForButton(SkinsButton *,int &,int &);
		void getSkinPaneWidth(void);
		void handleButtonRelease(MinecraftClient *,short);
		void handleControllerDirectionHeld(int,StickDirection);
		void onSelectSkinButton(MinecraftClient *,SkinsButton *);
		void pointerPressed(MinecraftClient *,int,int);
		void pointerPressedForType(int,int,std::vector<std::shared_ptr<SkinsButton>,std::allocator<std::shared_ptr<SkinsButton>>> &,std::shared_ptr<SkinsButton>&);
		void pointerReleased(MinecraftClient *,int,int);
		void refreshSkins(Options const&,SkinRepository &,TextureGroup &);
		void render(MinecraftClient *,int,int);
		void selectIfCustomSkin(Skin const&,SkinsButton *,MinecraftClient *);
		void setSelectedSkinButton(SkinRepository &);
		void setSkinForGridPosition(int &,int &,SkinsButton *);
		void setSkinStoreId(std::string const&);
		void setupPositions(void);
		void setupPositionsForSkinsAndSkinPacks(void);
		void ~SkinsPaneStandard();
		void ~SkinsPaneStandard();
};

#pragma once
class ScreenChooser{
	public:
		ScreenChooser(MinecraftClient &,UIScreenType,bool);
		void _pushScreen(std::shared_ptr<BaseScreen>,bool);
		void _pushScreen(std::shared_ptr<BaseScreen>,std::unique_ptr<AbstractScreenSetupCleanupStrategy,std::default_delete<AbstractScreenSetupCleanupStrategy>>,bool);
		void createGlobalVars(void);
		void getInBedScreen(void);
		void getPlayScreen(void);
		void getScreenType(void);
		void getSoundPlayer(void);
		void popScreen(AbstractScreen &,int);
		void pushAddExternalServerScreen(void);
		void pushAnvilScreen(Player &,BlockPos const&);
		void pushBrewingStandScreen(Player &,BlockPos const&);
		void pushChatScreen(void);
		void pushChestScreen(Player &,BlockPos const&);
		void pushChestScreen(Player &,EntityUniqueID);
		void pushConsoleScreen(void);
		void pushCreateWorldScreen(CreateWorldScreenType);
		void pushCreateWorldScreen(LevelSummary const&);
		void pushDeathScreen(void);
		void pushDeleteWorldScreen(LevelSummary const&);
		void pushDispenserScreen(Player &,BlockPos const&);
		void pushDropperScreen(Player &,BlockPos const&);
		void pushEnchantingScreen(Player &,BlockPos const&);
		void pushFurnaceScreen(Player &,BlockPos const&);
		void pushGamePadLayoutScreen(bool);
		void pushGameViewerScreen(void);
		void pushHopperScreen(Player &,BlockPos const&);
		void pushHopperScreen(Player &,EntityUniqueID const&);
		void pushHudScreen(void);
		void pushInBedScreen(void);
		void pushInventoryScreen(CraftingType);
		void pushKeyboardLayoutScreen(bool);
		void pushLanguageScreen(void);
		void pushLocalPlayScreen(void);
		void pushMakeInfiniteScreen(LevelSummary const&,StorageVersion);
		void pushMessageBoxScreen(std::string const&);
		void pushMobEffectsScreen(void);
		void pushOptionsScreen(bool,bool,std::string const&);
		void pushPausePrevScreen(void);
		void pushPauseScreen(void);
		void pushPlaySpaceScreen(void);
		void pushRealityScreen(void);
		void pushRemotePlayScreen(void);
		void pushSelectSkinTypeScreen(bool,bool,std::string const&);
		void pushShowSkinPackScreen(SkinPack const&,std::string const&,bool);
		void pushSkinsScreen(void);
		void pushTextEditScreen(SignBlockEntity *);
		void pushUpsellScreen(bool);
		void pushVRAlignScreen(void);
		void pushWorkbenchScreen(BlockPos const&);
		void pushXblLoginScreen(void);
		void setCanInvite(bool);
		void setDisconnectScreen(std::string const&);
		void setGameplayScreen(void);
		void setScreenType(UIScreenType);
		void setStartMenuScreen(void);
		void ~ScreenChooser();
};
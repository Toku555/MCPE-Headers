#pragma once
class ScreenChooser{
	public:
		ScreenChooser(MinecraftClient &,bool);
		ScreenChooser(MinecraftClient &,bool);
		void _getUIScreenSetupStrategy(bool);
		void _pushAchievementScreen(void);
		void _pushAchievementScreen(void);
		void function<void ();
		void function<void ();
		void _pushInviteScreen(void);
		void _pushInviteScreen(void);
		void _pushScreen(std::shared_ptr<BaseScreen>,bool);
		void _pushScreen(std::shared_ptr<BaseScreen>,bool);
		void _pushScreen(std::shared_ptr<BaseScreen>,std::unique_ptr<AbstractScreenSetupCleanupStrategy,std::default_delete<AbstractScreenSetupCleanupStrategy>>,bool);
		void _pushScreen(std::shared_ptr<BaseScreen>,std::unique_ptr<AbstractScreenSetupCleanupStrategy,std::default_delete<AbstractScreenSetupCleanupStrategy>>,bool);
		void function<void ();
		void createGlobalVars(void);
		void createGlobalVars(void);
		void getInBedScreen(void);
		void getInBedScreen(void);
		void getPlayScreen(void);
		void getPlayScreen(void);
		void getSoundPlayer(void);
		void isAchievementsScreen(AbstractScreen &);
		void isAchievementsScreen(AbstractScreen &);
		void isInBedScreen(AbstractScreen const&);
		void isInBedScreen(AbstractScreen const&);
		void isModalScreen(AbstractScreen &);
		void isModalScreen(AbstractScreen &);
		void popScreen(AbstractScreen &,int);
		void popScreen(AbstractScreen &,int);
		void pushAchievementScreen(void);
		void pushAchievementScreen(void);
		void pushAddExternalServerScreen(void);
		void pushAddExternalServerScreen(void);
		void function<void ();
		void function<void ();
		void pushAnvilScreen(Player &,BlockPos const&);
		void pushAnvilScreen(Player &,BlockPos const&);
		void pushBrewingStandScreen(Player &,BlockPos const&);
		void pushBrewingStandScreen(Player &,BlockPos const&);
		void pushChatScreen(void);
		void pushChatScreen(void);
		void pushChestScreen(Player &,BlockPos const&);
		void pushChestScreen(Player &,BlockPos const&);
		void pushChestScreen(Player &,EntityUniqueID);
		void pushChestScreen(Player &,EntityUniqueID);
		void pushConsoleScreen(void);
		void pushConsoleScreen(void);
		void pushCreateWorldScreen(CreateWorldScreenType);
		void pushCreateWorldScreen(CreateWorldScreenType);
		void pushCreateWorldScreen(LevelSummary const&);
		void pushCreateWorldScreen(LevelSummary const&);
		void pushDeathScreen(void);
		void pushDeathScreen(void);
		void pushDebugScreen(void);
		void pushDebugScreen(void);
		void pushDeleteWorldScreen(LevelSummary const&);
		void pushDeleteWorldScreen(LevelSummary const&);
		void pushDispenserScreen(Player &,BlockPos const&);
		void pushDispenserScreen(Player &,BlockPos const&);
		void pushDropperScreen(Player &,BlockPos const&);
		void pushDropperScreen(Player &,BlockPos const&);
		void pushEnchantingScreen(Player &,BlockPos const&);
		void pushEnchantingScreen(Player &,BlockPos const&);
		void pushFurnaceScreen(Player &,BlockPos const&);
		void pushFurnaceScreen(Player &,BlockPos const&);
		void pushGamePadLayoutScreen(bool);
		void pushGamePadLayoutScreen(bool);
		void pushGameViewerScreen(void);
		void pushGameViewerScreen(void);
		void pushHolographicCursorScreen(void);
		void pushHolographicCursorScreen(void);
		void pushHolographicPostRenderScreen(void);
		void pushHolographicPostRenderScreen(void);
		void pushHopperScreen(Player &,BlockPos const&);
		void pushHopperScreen(Player &,BlockPos const&);
		void pushHopperScreen(Player &,EntityUniqueID const&);
		void pushHopperScreen(Player &,EntityUniqueID const&);
		void pushHorseScreen(Player &,EntityUniqueID const&);
		void pushHorseScreen(Player &,EntityUniqueID const&);
		void pushHudScreen(void);
		void pushHudScreen(void);
		void pushImportExportProgressScreen(std::string const&,std::string const&);
		void pushImportExportProgressScreen(std::string const&,std::string const&);
		void pushInBedScreen(void);
		void pushInBedScreen(void);
		void pushInventoryScreen(CraftingType);
		void pushInventoryScreen(CraftingType);
		void pushInviteScreen(void);
		void pushInviteScreen(void);
		void pushKeyboardLayoutScreen(bool);
		void pushKeyboardLayoutScreen(bool);
		void pushLanguageScreen(void);
		void pushLanguageScreen(void);
		void pushLocalPlayScreen(bool);
		void pushLocalPlayScreen(bool);
		void pushMakeInfiniteScreen(LevelSummary const&,StorageVersion);
		void pushMakeInfiniteScreen(LevelSummary const&,StorageVersion);
		void pushMessageBoxScreen(std::string const&);
		void pushMessageBoxScreen(std::string const&);
		void pushMobEffectsScreen(void);
		void pushMobEffectsScreen(void);
		void function<void ();
		void function<void ();
		void pushNetherProgressScreen(bool);
		void pushNetherProgressScreen(bool);
		void pushNetworkProgressScreen(std::string const&);
		void pushNetworkProgressScreen(std::string const&);
		void pushOptionsScreen(bool,int);
		void pushOptionsScreen(bool,int);
		void pushPausePrevScreen(void);
		void pushPausePrevScreen(void);
		void pushPauseScreen(void);
		void pushPauseScreen(void);
		void pushPlaySpaceScreen(void);
		void pushPlaySpaceScreen(void);
		void pushPortfolioScreen(void);
		void pushPortfolioScreen(void);
		void pushProgressScreen(std::string const&,std::string const&,std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>,bool,bool);
		void pushProgressScreen(std::string const&,std::string const&,std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>,bool,bool);
		void pushRealityModeTransitionScreen(void);
		void pushRealityModeTransitionScreen(void);
		void pushRealityScreen(void);
		void pushRealityScreen(void);
		void pushRealmsCreateScreen(bool);
		void pushRealmsCreateScreen(bool);
		void pushRealmsInvitationScreen(Realms::World const&);
		void pushRealmsInvitationScreen(Realms::World const&);
		void pushRealmsPendingInvitesScreen(bool);
		void pushRealmsPendingInvitesScreen(bool);
		void pushRealmsSettingsScreen(Realms::World const&);
		void pushRealmsSettingsScreen(Realms::World const&);
		void pushResourcePackPurchaseScreen(int,bool);
		void pushResourcePackPurchaseScreen(int,bool);
		void pushResourcePacksScreen(bool);
		void pushResourcePacksScreen(bool);
		void pushSkinPackPurchaseScreen(int);
		void pushSkinPackPurchaseScreen(int);
		void pushSkinPackUpsellScreen(int,int);
		void pushSkinPackUpsellScreen(int,int);
		void pushSkinPickerScreen(void);
		void pushSkinPickerScreen(void);
		void pushStoreScreen(void);
		void pushStoreScreen(void);
		void pushTextEditScreen(SignBlockEntity *);
		void pushTextEditScreen(SignBlockEntity *);
		void pushToastScreen(void);
		void pushToastScreen(void);
		void pushUpsellScreen(bool);
		void pushUpsellScreen(bool);
		void pushVRAlignScreen(void);
		void pushVRAlignScreen(void);
		void pushVRControlScreen(bool);
		void pushVRControlScreen(bool);
		void pushVRInformationScreen(void);
		void pushVRInformationScreen(void);
		void pushWorkbenchScreen(BlockPos const&);
		void pushWorkbenchScreen(BlockPos const&);
		void function<void ();
		void function<void ();
		void pushXblFirstLaunchScreen(void);
		void pushXblFirstLaunchScreen(void);
		void pushXblLoginScreen(void);
		void resetBedScreen(void);
		void resetBedScreen(void);
		void setCanInvite(bool);
		void setCanInvite(bool);
		void setDisconnectScreen(std::string const&,std::string const&);
		void setDisconnectScreen(std::string const&,std::string const&);
		void setGameplayScreen(void);
		void setGameplayScreen(void);
		void setLeaveLevelScreen(void);
		void setLeaveLevelScreen(void);
		void setStartMenuScreen(void);
		void setStartMenuScreen(void);
		void ~ScreenChooser();
		void ~ScreenChooser();
};
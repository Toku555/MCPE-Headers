#pragma once
namespace j{
	class ScreenChooser{
		public:
		void _pushAchievementScreen(void);
		void _pushInviteScreen(void);
		void popScreen(AbstractScreen &,int);
		void pushAchievementScreen(void);
		void pushAddExternalServerScreen(void);
		void pushAnvilScreen(Player &,BlockPos const&);
		void pushBrewingStandScreen(Player &,BlockPos const&);
		void pushChatScreen(void);
		void pushChestScreen(Player &,BlockPos const&);
		void pushChestScreen(Player &,EntityUniqueID);
		void pushConsoleScreen(void);
		void pushCreateWorldScreen(CreateWorldScreenType);
		void pushDeleteWorldScreen(LevelSummary const&);
		void pushDispenserScreen(Player &,BlockPos const&);
		void pushDropperScreen(Player &,BlockPos const&);
		void pushEnchantingScreen(Player &,BlockPos const&);
		void pushFurnaceScreen(Player &,BlockPos const&);
		void pushGamePadLayoutScreen(bool);
		void pushGameViewerScreen(void);
		void pushHopperScreen(Player &,BlockPos const&);
		void pushHopperScreen(Player &,EntityUniqueID const&);
		void pushHorseScreen(Player &,EntityUniqueID const&);
		void pushInventoryScreen(CraftingType);
		void pushInviteScreen(void);
		void pushKeyboardLayoutScreen(bool);
		void pushLanguageScreen(void);
		void pushLocalPlayScreen(bool);
		void pushMobEffectsScreen(void);
		void pushOptionsScreen(bool,int);
		void pushPauseScreen(void);
		void pushPlaySpaceScreen(void);
		void pushPortfolioScreen(void);
		void pushRealityModeTransitionScreen(void);
		void pushRealityScreen(void);
		void pushRealmsCreateScreen(bool);
		void pushRealmsInvitationScreen(Realms::World const&);
		void pushRealmsPendingInvitesScreen(bool);
		void pushRealmsSettingsScreen(Realms::World const&);
		void pushResourcePackPurchaseScreen(int,bool);
		void pushResourcePacksScreen(bool);
		void pushSkinPackPurchaseScreen(int);
		void pushSkinPackUpsellScreen(int,int);
		void pushSkinPickerScreen(void);
		void pushStoreScreen(void);
		void pushTextEditScreen(SignBlockEntity *);
		void pushUpsellScreen(bool);
		void pushVRControlScreen(bool);
		void pushVRInformationScreen(void);
		void pushWorkbenchScreen(BlockPos const&);
		void setDisconnectScreen(std::string const&,std::string const&);
		void setGameplayScreen(void);
		void setLeaveLevelScreen(void);
		void setStartMenuScreen(void);
	}
};

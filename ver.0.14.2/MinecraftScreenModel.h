#pragma once
class MinecraftScreenModel{
	public:
		MinecraftScreenModel(MinecraftClient &);
		void cancelJoinGame(LoadingState);
		void deleteContainerManager(void);
		void distanceSqrFromPlayerToBlockCenter(Vec3 const&);
		void dropItemsFromPlayer(ItemInstance const*,int);
		void forceChunckBuildout(void);
		void getArchiverState(void);
		void getBlockAt(BlockPos);
		void getDevelopmentVersionString(void);
		void getFont(void);
		void getHoloInput(void);
		void getHotbarSlotCount(void);
		void getInventorySlot(void);
		void getInventorySlotCount(void);
		void getLinkedSlotCount(void);
		void getLocalPlayer(void);
		void getNameRegistry(void);
		void getNewGuiChatMessages(void);
		void getNewPopupItemText(std::string &);
		void getPickRange(void);
		void getPlayerName(void);
		void getPlayerPositionText(void);
		void getVersionString(void);
		void getXboxLiveFriends(void);
		void getXuidsInLobby(void);
		void handleGameEventNotification(ui::GameEventNotification);
		void hasLocalPlayer(void);
		void invitePlayers(std::vector<std::string,std::allocator<std::string>> const&);
		void isDirty(void);
		void isEnabledTouchOrHolographic(void);
		void isPlayerValid(void);
		void isRealityFullVRMode(void);
		void isVRComfortControlMode(void);
		void isVRMode(void);
		void leaveGame(void);
		void leaveScreen(void);
		void linkPlayerToScreen(void);
		void linkScreenToPlayer(void);
		void navigateToDisconnectScreen(std::string const&,std::string const&);
		void navigateToGamePlayScreen(void);
		void navigateToInventoryScreen(void);
		void navigateToInviteScreen(void);
		void navigateToLanguageScreen(void);
		void navigateToLeaveLevelScreen(void);
		void navigateToOptionsScreen(bool,int);
		void navigateToPauseScreen(void);
		void navigateToPlayScreen(void);
		void navigateToPortfolioScreen(void);
		void navigateToSkinsScreen(void);
		void navigateToStartScreen(void);
		void openUriLink(std::string const&);
		void pushVRInformationScreen(void);
		void pushVRSchemeScreen(bool);
		void quit(void);
		void sendTrialWelcomeMessage(void);
		void setIsDirty(bool);
		void setLanguage(std::string const&);
		void setScreenFadeAlpha(float,float);
		void setSuspendInput(bool);
		void setVRControlMode(bool);
		void shouldDisplayPlayerPosition(void);
		void shouldPushVRControlScreen(void);
		void toggleSkin(void);
		void ~MinecraftScreenModel();
		void ~MinecraftScreenModel();
};
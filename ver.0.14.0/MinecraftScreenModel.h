#pragma once
class MinecraftScreenModel{
	public:
		MinecraftScreenModel(MinecraftClient &);
		void deleteContainerManager(void);
		void distanceSqrFromPlayerToBlockCenter(Vec3 const&);
		void dropItemsFromPlayer(ItemInstance const*,int);
		void getBlockAt(BlockPos);
		void getButtonId(std::string const&);
		void getDevelopmentVersionString(void);
		void getHotbarSlotCount(void);
		void getInventorySlotCount(void);
		void getKeyboardHeight(void);
		void getLinkedSlotCount(void);
		void getLocalPlayer(void);
		void getPlayerName(void);
		void getVersionString(void);
		void handleGameEventNotification(UI::GameEventNotification);
		void hideKeyboard(void);
		void isPlayerValid(void);
		void leaveGame(void);
		void leaveScreen(void);
		void linkPlayerToScreen(void);
		void linkScreenToPlayer(void);
		void navigateToLanguageScreen(void);
		void navigateToOptionsScreen(bool);
		void navigateToPauseScreen(void);
		void navigateToPlayScreen(void);
		void navigateToSkinsScreen(void);
		void navigateToStartScreen(void);
		void openUriLink(std::string const&);
		void quit(void);
		void sendTrialWelcomeMessage(void);
		void setLanguage(std::string const&);
		void setSuspendInput(bool);
		void showKeyboard(std::string const&,int,bool,bool,Vec2 const&);
		void ~MinecraftScreenModel();
		void ~MinecraftScreenModel();
};

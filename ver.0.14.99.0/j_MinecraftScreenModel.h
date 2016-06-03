#pragma once
namespace j{
	class MinecraftScreenModel{
		public:
		void cancelJoinGame(LoadingState);
		void fireEventScreenChanged(void);
		void getHotbarSlotCount(void);
		void getInventorySlot(void);
		void getOfferUnlocked(int,int);
		void getSkinLocked(MinecraftScreenModel::SkinInfo const&);
		void getSkinPackUnlocked(int);
		void hasLocalPlayer(void);
		void isInputModeGamepad(void);
		void isPlayerSignedIn(void);
		void isPlayerValid(void);
		void isRealmsEnabled(void);
		void leaveScreen(void);
		void linkScreenToPlayer(void);
		void navigateToPauseScreen(void);
		void navigateToPlayScreen(void);
		void navigateToRealmsInvitationScreen(Realms::World const&);
		void navigateToStartScreen(void);
		void quit(void);
		void setLastSelectedSlot(int);
		void setSelectedSkin(MinecraftScreenModel::SkinInfo const&);
		void setSuspendInput(bool);
		void showSignInButton(void);
	}
};

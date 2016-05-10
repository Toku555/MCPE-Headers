#pragma once
class BuySkinPackDialogue{
	public:
		void function<void ();
		void addControlsForFailed(std::string const&);
		void addControlsForPurchase(void);
		void addControlsForWaiting(void);
		void buttonClicked(Button const*,MinecraftClient *);
		void handleControllerDirectionHeld(int,StickDirection);
		void isBlockingGUI(void);
		void onPurchaseCancel(MinecraftClient *);
		void onPurchaseFail(MinecraftClient *);
		void onPurchaseSuccessful(MinecraftClient *);
		void pointerPressed(MinecraftClient *,int,int);
		void setupPositions(void);
		void updateTabSelection(void);
		void ~BuySkinPackDialogue();
		void ~BuySkinPackDialogue();
};

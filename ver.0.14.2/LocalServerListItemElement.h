#pragma once
class LocalServerListItemElement{
	public:
		LocalServerListItemElement(MinecraftClient *,ExternalServer,PlayScreen *);
		LocalServerListItemElement(MinecraftClient *,LevelSummary const&);
		LocalServerListItemElement(PingedCompatibleServer const&);
		void controllerDirectionChanged(int,StickDirection);
		void detailButtonPressed(MinecraftClient *);
		void drawSelected(void);
		void getLastPlayedString(void);
		void handleButtonRelease(MinecraftClient *,short);
		void init(MinecraftClient *);
		void onSelectedChanged(void);
		void pointerPressed(MinecraftClient *,int,int);
		void pointerReleased(MinecraftClient *,int,int);
		void serverMainPressed(MinecraftClient *);
		void serverRemovePressed(MinecraftClient *);
		void tick(MinecraftClient *);
		void ~LocalServerListItemElement();
		void ~LocalServerListItemElement();
};

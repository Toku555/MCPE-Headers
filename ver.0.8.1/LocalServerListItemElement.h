#pragma once
class LocalServerListItemElement{
	public:
		LocalServerListItemElement(Minecraft *,ExternalServer,bool,PlayScreen *);
		LocalServerListItemElement(Minecraft *,LevelSummary const&,bool);
		LocalServerListItemElement(PingedCompatibleServer const&);
		void getLastPlayedString(void);
		void init(Minecraft *);
		void mouseClicked(Minecraft *,int,int,int);
		void mouseReleased(Minecraft *,int,int,int);
		void render(Minecraft *,int,int);
		void tick(Minecraft *);
		void ~LocalServerListItemElement();
		void ~LocalServerListItemElement();
};

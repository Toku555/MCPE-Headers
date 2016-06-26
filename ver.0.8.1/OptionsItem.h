#pragma once
class OptionsItem{
	public:
		OptionsItem(Options::Option const*,std::shared_ptr<GuiElement>);
		void render(Minecraft *,int,int);
		void setupPositions(void);
		void ~OptionsItem();
		void ~OptionsItem();
};

#pragma once
class OptionsItem{
	public:
		OptionsItem(Options::Option const&,std::shared_ptr<GuiElement>);
		OptionsItem(Options::Option const&,std::shared_ptr<GuiElement>);
		OptionsItem(Options::Option const*,std::shared_ptr<GuiElement>);
		OptionsItem(Options::Option const*,std::shared_ptr<GuiElement>);
		void _isLocked(void);
		void getLabel(MinecraftClient *);
		void getLabel(MinecraftClient *);
		void hasFocus(void);
		void hasFocus(void);
		void onSelectedChanged(void);
		void onSelectedChanged(void);
		void render(MinecraftClient *,int,int);
		void render(MinecraftClient *,int,int);
		void setupPositions(void);
		void setupPositions(void);
		void ~OptionsItem();
		void ~OptionsItem();
};

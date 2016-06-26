#pragma once
class OptionsGroup{
	public:
		OptionsGroup(std::string);
		void addLoginItem(Minecraft *);
		void addOptionItem(Options::Option const*,Minecraft *);
		void createProgressSlider(Options::Option const*,Minecraft *);
		void createStepSlider(Options::Option const*,Minecraft *);
		void createTextBox(Options::Option const*,Minecraft *);
		void createToggle(Options::Option const*,Minecraft *);
		void render(Minecraft *,int,int);
		void setupPositions(void);
		void ~OptionsGroup();
		void ~OptionsGroup();
};

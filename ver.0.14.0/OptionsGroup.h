#pragma once
class OptionsGroup{
	public:
		OptionsGroup(std::string,bool);
		void addDisabledPane(MinecraftClient &,std::string const&);
		void addLimitedTextBoxOptionItem(Options::Option const&,MinecraftClient &,std::string const&);
		void addOptionItem(Options::Option const&,MinecraftClient &);
		void createProgressSlider(Options::Option const&,MinecraftClient &);
		void createStepSlider(Options::Option const&,MinecraftClient &);
		void createTextBox(Options::Option const&,MinecraftClient &,std::string const&);
		void createToggle(Options::Option const&,MinecraftClient &);
		void optionalAddOptionItem(bool,Options::Option const&,MinecraftClient &);
		void render(MinecraftClient *,int,int);
		void setupPositions(void);
		void ~OptionsGroup();
		void ~OptionsGroup();
};

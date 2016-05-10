#pragma once
class OptionButton{
	public:
		OptionButton(Options::Option const&);
		OptionButton(Options::Option const&,float,float);
		OptionButton(bool);
		void handleButtonRelease(MinecraftClient *,short);
		void isSecondImage(bool);
		void isSet(Options *);
		void pointerPressed(MinecraftClient *,int,int);
		void setValue(bool,Options *);
		void tick(MinecraftClient *);
		void toggle(Options *);
		void updateImage(Options *);
		void ~OptionButton();
		void ~OptionButton();
};

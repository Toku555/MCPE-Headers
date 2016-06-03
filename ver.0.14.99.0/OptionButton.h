#pragma once
class OptionButton{
	public:
		OptionButton(Options::Option const&);
		OptionButton(Options::Option const&);
		OptionButton(Options::Option const&,float,float);
		OptionButton(bool);
		OptionButton(bool);
		void handleButtonRelease(MinecraftClient *,short);
		void handleButtonRelease(MinecraftClient *,short);
		void isSecondImage(bool);
		void isSecondImage(bool);
		void isSet(Options *);
		void isSet(Options *);
		void pointerPressed(MinecraftClient *,int,int);
		void pointerPressed(MinecraftClient *,int,int);
		void setValue(bool,Options *);
		void setValue(bool,Options *);
		void tick(MinecraftClient *);
		void tick(MinecraftClient *);
		void toggle(Options *);
		void toggle(Options *);
		void updateImage(Options *);
		void updateImage(Options *);
		void ~OptionButton();
		void ~OptionButton();
};

#pragma once
class OptionButton{
	public:
		OptionButton(Options::Option const*);
		OptionButton(Options::Option const*,float,float);
		OptionButton(bool);
		void isSecondImage(bool);
		void isSet(Options *);
		void mouseClicked(Minecraft *,int,int,int);
		void toggle(Options *);
		void updateImage(Options *);
		void ~OptionButton();
		void ~OptionButton();
};

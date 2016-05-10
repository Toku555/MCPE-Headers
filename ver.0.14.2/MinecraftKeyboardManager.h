#pragma once
class MinecraftKeyboardManager{
	public:
		MinecraftKeyboardManager(void);
		void canActivateKeyboard(void);
		void disableKeyboard(void);
		void enableKeyboard(std::string const&,int,bool,bool,Vec2 const&);
		void forceActivateKeyboard(std::string const&,int,bool,bool,Vec2 const&);
		void getKeyboardHeight(void);
		void isKeyboardActive(void);
		void isKeyboardEnabled(void);
		void setForcedHeight(float);
		void ~MinecraftKeyboardManager();
		void ~MinecraftKeyboardManager();
};

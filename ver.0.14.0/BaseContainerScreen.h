#pragma once
class BaseContainerScreen{
	public:
		BaseContainerScreen(MinecraftClient &,std::weak_ptr<BaseContainerMenu>);
		void _closeScreen(void);
		void closeOnPlayerHurt(void);
		void containerChanged(int);
		void tick(void);
		void ~BaseContainerScreen();
		void ~BaseContainerScreen();
};

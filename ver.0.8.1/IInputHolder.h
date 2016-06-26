#pragma once
class IInputHolder{
	public:
		void allowPicking(void);
		void onConfigChanged(Config const&);
		void render(float);
		void ~IInputHolder();
		void ~IInputHolder();
};

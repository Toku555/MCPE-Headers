#pragma once
class TouchInputHolder{
	public:
		void allowPicking(void);
		void getBuildInput(void);
		void getMoveInput(void);
		void getTurnInput(void);
		void onConfigChanged(Config const&);
		void render(float);
		void ~TouchInputHolder();
		void ~TouchInputHolder();
};

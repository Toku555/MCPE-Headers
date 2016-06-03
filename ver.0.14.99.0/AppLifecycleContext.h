#pragma once
class AppLifecycleContext{
	public:
		AppLifecycleContext(void);
		AppLifecycleContext(void);
		void advanceFrame(void);
		void advanceFrame(void);
		void canRender(void);
		void canRender(void);
		void getFocus(void);
		void getHasGraphicsContext(void);
		void getHasWindowFocus(void);
		void setFocus(bool);
		void setFocus(bool);
		void setHasGraphicsContext(bool);
		void setHasGraphicsContext(bool);
		void setHasWindowFocus(bool);
		void setHasWindowFocus(bool);
		void transitionBeginRenderingThisFrame(void);
		void transitionEndRenderingThisFrame(void);
};

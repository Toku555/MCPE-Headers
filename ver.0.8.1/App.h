#pragma once
class App{
	public:
		void audioEngineOff(void);
		void audioEngineOn(void);
		void destroy(void);
		void draw(void);
		void handleBack(bool);
		void handleBack(void);
		void init(AppContext &);
		void init(void);
		void loadState(void *,int);
		void platform(void);
		void quit(void);
		void saveState(void **,int *);
		void setSize(int,int);
		void setTextboxText(std::string const&);
		void update(void);
		void useTouchscreen(void);
		void wantToQuit(void);
		void ~App();
		void ~App();
};

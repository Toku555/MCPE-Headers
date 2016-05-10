#pragma once
class App{
	public:
		App(int,char **);
		void audioEngineOff(void);
		void audioEngineOn(void);
		void changeContext(AppContext &);
		void destroy(void);
		void draw(void);
		void init(AppContext &);
		void init(void);
		void loadState(void *,int);
		void muteAudio(void);
		void quit(void);
		void saveState(void **,int *);
		void setRenderingSize(int,int);
		void setTextboxText(std::string const&);
		void setUISizeAndScale(int,int,float);
		void unMuteAudio(void);
		void update(void);
		void useTouchscreen(void);
		void wantToQuit(void);
		void ~App();
		void ~App();
};

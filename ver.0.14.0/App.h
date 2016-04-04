#pragma once
class App{
	public:
		App(int,char **);
		void audioEngineOff(void);
		void audioEngineOn(void);
		void changeContext(AppContext &);
		void destroy(void);
		void draw(void);
		void getCommandLineParameter(std::string const&);
		void init(AppContext &);
		void init(void);
		void loadState(void *,int);
		void muteAudio(void);
		void quit(void);
		void saveState(void **,int *);
		void setSize(int,int,float);
		void setTextboxText(std::string const&);
		void unMuteAudio(void);
		void update(void);
		void useTouchscreen(void);
		void wantToQuit(void);
		void ~App();
		void ~App();
};

#pragma once
class AndroidRestRequestJob{
	public:
		AndroidRestRequestJob(Minecraft *);
		void finish(void);
		void isRunning(void);
		void onRequestComplete(int,int,std::string const&);
		void run(void);
		void stop(void);
		void ~AndroidRestRequestJob();
		void ~AndroidRestRequestJob();
};

#pragma once
namespace WorkerPool{
	class RolePool{
		public:
		void RolePool(void);
		void add(BackgroundWorker &);
		void get(void);
		void size(void);
		WorkerPool(void);
		WorkerPool(void);
		void _createWorker(std::string const&,bool);
		void _createWorker(std::string const&,bool);
		void _getTimeCap(int);
		void _runCoroutines(double);
		void _runCoroutines(double);
		void _start(int);
		void _start(int);
		void assign(WorkerRole,BackgroundWorker &);
		void count(WorkerRole);
		void getEffectiveTargetFPS(void);
		void getFor(WorkerRole);
		void getFor(WorkerRole);
		void getFor(int);
		void getForThread(std::thread::id);
		void getForThread(std::thread::id);
		void getInstance(void);
		void getInstance(void);
		void getLocal(void);
		void getMain(void);
		void getMain(void);
		void getWorkersFor(WorkerRole);
		void getWorkersFor(WorkerRole);
		void isStarved(void);
		void isStarved(void);
		void processCoroutines(double);
		void processCoroutines(double);
		void setLocal(BackgroundWorker &);
		void setLocal(BackgroundWorker &);
		void setTargetFPS(int);
		void setTargetFPS(int);
		void start(int);
		void start(int);
		void stop(void);
		void stop(void);
		void ~WorkerPool();
		void ~WorkerPool();
	}
};

#pragma once
class BackgroundWorker{
	public:
		BackgroundWorker(std::string const&,bool);
		void function<bool ();
		void Job(void);
		void clear(void);
		void getCallback(void);
		void getFuture(void);
		void operator bool(void);
		void operator<(BackgroundWorker::Job const&);
		void run(void);
		void ~Job();
		void _processCallbacks(void);
		void _processNextCoroutine(void);
		void _queue(BackgroundWorker::Job &);
		void _resetData(void);
		void _start(void);
		void _tryPopLocal(BackgroundWorker::Job &,bool);
		void _tryPopReal(BackgroundWorker::Job &);
		void _workerThread(void);
		void flush(void);
		void getAverageJobsPerFrame(void);
		void getName(void);
		void isIdle(void);
		void isPaused(void);
		void notifyCoworkers(std::vector<BackgroundWorker*,std::allocator<BackgroundWorker*>> const&);
		void processNext(void);
		void resume(void);
		void ~BackgroundWorker();
};

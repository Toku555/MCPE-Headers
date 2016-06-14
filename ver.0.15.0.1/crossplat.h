#pragma once
class crossplat{
	public:
		void get_jvm_env(void);
		void detach_from_java(void *);
		void shared_instance(void);
		void thread_start(void *);
		void threadpool(uint);
		void threadpool(uint);
		void ~threadpool();
};

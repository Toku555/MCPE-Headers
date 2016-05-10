#pragma once
class JVMAttacher{
	public:
		JVMAttacher(_JavaVM *);
		void forceDetach(void);
		void getEnv(void);
		void isAttached(void);
		void ~JVMAttacher();
};

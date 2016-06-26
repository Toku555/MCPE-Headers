#pragma once
class JVMAttacher{
	public:
		JVMAttacher(_JavaVM *);
		void forceDetach(void);
};

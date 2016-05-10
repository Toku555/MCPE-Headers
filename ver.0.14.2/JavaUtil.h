#pragma once
class JavaUtil{
	public:
		void getActivityObject(void);
		void getVM(void);
		void setActivityObject(_jobject *);
		void setVM(_JavaVM *);
};

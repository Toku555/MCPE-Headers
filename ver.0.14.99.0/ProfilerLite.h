#pragma once
class ProfilerLite{
	public:
		ProfilerLite(void);
		void _endScope(ProfilerLite::Scope,double,double);
		void _endScope(ProfilerLite::Scope,double,double);
		void init(void);
		void init(void);
		void reset(void);
		void tick(bool,bool);
};

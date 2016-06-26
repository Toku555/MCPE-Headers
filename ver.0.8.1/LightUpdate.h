#pragma once
class LightUpdate{
	public:
		LightUpdate(LightLayer const&,int,int,int,int,int,int);
		LightUpdate(LightUpdate const&);
		LightUpdate(LightUpdate const*);
		void expandToContain(int,int,int,int,int,int);
		void operator=(LightUpdate const*);
		void update(Level *);
};

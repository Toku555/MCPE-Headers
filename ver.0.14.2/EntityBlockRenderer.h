#pragma once
class EntityBlockRenderer{
	public:
		void destroyInstance(void);
		void getInstance(void);
		void render(Block *,int,float);
};

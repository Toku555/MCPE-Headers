#pragma once
class CaveSpider{
	public:
		CaveSpider(BlockSource &);
		void doHurtTarget(Entity *);
		void getEntityTypeId(void);
		void getModelScale(void);
		void getSpiderType(void);
		void registerAttributes(void);
		void ~CaveSpider();
		void ~CaveSpider();
};

#pragma once
class ComponentRenderBatch{
	public:
		ComponentRenderBatch(ComponentRenderBatch const&);
		ComponentRenderBatch(UIBatchType,int,int,std::string const&,std::string const&,std::string const&,BatchClippingState const&);
		ComponentRenderBatch(int,float,BatchClippingState const&);
		ComponentRenderBatch(int,float,std::string const&,Color const&,BatchClippingState const&);
		void addCustomRenderInstance(CustomRenderComponent *);
		void addSpriteInstance(SpriteComponent *);
		void addTextInstance(TextComponent *);
		void begin(UIRenderContext &);
		void end(UIRenderContext &);
		void getNumInstances(void);
		void markDirty(void);
};

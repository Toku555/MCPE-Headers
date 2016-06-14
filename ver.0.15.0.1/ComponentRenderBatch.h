#pragma once
class ComponentRenderBatch{
	public:
		ComponentRenderBatch(BatchKey const&);
		ComponentRenderBatch(ComponentRenderBatch const&);
		ComponentRenderBatch(ComponentRenderBatch const&);
		void addCustomRenderInstance(CustomRenderComponent *);
		void addSpriteInstance(SpriteComponent *);
		void addTextInstance(TextComponent *);
		void begin(UIRenderContext &);
		void begin(UIRenderContext &);
		void end(UIRenderContext &);
		void end(UIRenderContext &);
		void getNumInstances(void);
		void getNumInstances(void);
};

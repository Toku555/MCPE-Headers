#pragma once
class ComponentRenderBatch{
	public:
		ComponentRenderBatch(BatchKey const&);
		void addCustomRenderInstance(CustomRenderComponent *);
		void addSpriteInstance(SpriteComponent *);
		void addTextInstance(TextComponent *);
		void begin(UIRenderContext &);
		void end(UIRenderContext &);
		void getNumInstances(void);
};

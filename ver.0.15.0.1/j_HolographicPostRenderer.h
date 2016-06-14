#pragma once
namespace j{
	class HolographicPostRenderer{
		public:
		void _buildLevelMesh(void);
		void _buildUIQuadMesh(void);
		void _processAndRenderFadeScreenQuad(MinecraftClient &);
		void ~HolographicPostRenderer();
	}
};

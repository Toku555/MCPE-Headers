#pragma once
namespace j{
	class EntityShaderManager{
		public:
		void _setupFoilShaderParameters(Color const&,Color const&,Vec2 const&);
		void _setupFoilShaderParameters(TextureUVCoordinateSet const&);
	}
};

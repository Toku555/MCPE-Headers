#pragma once
class BiomeInitLayer{
	public:
		BiomeInitLayer(uint,std::shared_ptr<Layer> &,GeneratorType);
		void fillArea(LayerData &,int,int,int,int);
		void ~BiomeInitLayer();
		void ~BiomeInitLayer();
};

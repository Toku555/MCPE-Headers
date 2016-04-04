#pragma once
class BiomeEdgeLayer{
	public:
		BiomeEdgeLayer(uint,std::shared_ptr<Layer> &,bool);
		void checkEdge(LayerData &,int,int,int,int,int,int);
		void checkEdgeStrict(LayerData &,int,int,int,int,int,int);
		void fillArea(LayerData &,int,int,int,int);
		void isValidTemperatureEdge(int,int);
		void ~BiomeEdgeLayer();
		void ~BiomeEdgeLayer();
};

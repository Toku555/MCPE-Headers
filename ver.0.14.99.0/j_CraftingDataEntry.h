#pragma once
namespace j{
	class CraftingDataEntry{
		public:
		void fillFromShapedRecipe(ShapedRecipe const&);
		void fillFromShapelessRecipe(ShapelessRecipe const&);
	}
};

class CfgPatches
{
	class DadaPlaceables_Frames // CHANGE <TEMPLATE> to INVESTOR DISCORD NAME
	{
		weapons[] = {}; // DO NOT TOUCH
		requiredVersion = 0.1; // DO NOT TOUCH
		requiredAddons[] = {"DadaPlaceables"};
		units[] = {}; // DO NOT TOUCH
	};
};

class CfgVehicles
{
    class Dada_InHandsPlaceable_Colorbase;

    class Dada_InHandsPlaceable_PictureFrame_Square: Dada_InHandsPlaceable_Colorbase
	{
		scope = 2;
		displayName = "Picture Frame";
		descriptionShort = "A framed image";
		model = "Source_Files\DadaPlaceables\Configs\PictureFrame_Square.p3d";
		itemSize[] = {3,4};
		weight = 1000;
		rotationFlags = 64;
		itemBehaviour = 1;
		hiddenSelections[] = {"Frame","Picture"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaPlaceables\Configs\data\Frame_co.paa","Source_Files\DadaPlaceables\Configs\data\Picture_co.paa"};
		hiddenSelectionsMaterials[] = {"Source_Files\DadaPlaceables\Configs\data\Frame.rvmat","Source_Files\DadaPlaceables\Configs\data\Picture.rvmat"};
	};

    class Dada_InHandsPlaceable_PictureFrame_Portrait: Dada_InHandsPlaceable_Colorbase
	{
		scope = 2;
		displayName = "Picture Frame";
		descriptionShort = "A framed image";
		model = "Source_Files\DadaPlaceables\Configs\PictureFrame_Portrait.p3d";
		itemSize[] = {3,4};
		weight = 1000;
		rotationFlags = 64;
		itemBehaviour = 1;
		hiddenSelections[] = {"Frame","Picture"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaPlaceables\Configs\data\Frame_co.paa","Source_Files\DadaPlaceables\Configs\data\Picture_co.paa"};
		hiddenSelectionsMaterials[] = {"Source_Files\DadaPlaceables\Configs\data\Frame.rvmat","Source_Files\DadaPlaceables\Configs\data\Picture.rvmat"};
	};

    class Dada_InHandsPlaceable_PictureFrame_Landscape: Dada_InHandsPlaceable_Colorbase
	{
		scope = 2;
		displayName = "Picture Frame";
		descriptionShort = "A framed image";
		model = "Source_Files\DadaPlaceables\Configs\PictureFrame_Landscape.p3d";
		itemSize[] = {3,4};
		weight = 1000;
		rotationFlags = 64;
		itemBehaviour = 1;
		hiddenSelections[] = {"Frame","Picture"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaPlaceables\Configs\data\Frame_co.paa","Source_Files\DadaPlaceables\Configs\data\Picture_co.paa"};
		hiddenSelectionsMaterials[] = {"Source_Files\DadaPlaceables\Configs\data\Frame.rvmat","Source_Files\DadaPlaceables\Configs\data\Picture.rvmat"};
	};

    class Dada_InHandsPlaceable_Painting_Square: Dada_InHandsPlaceable_Colorbase
	{
		scope = 2;
		displayName = "Framed Painting";
		descriptionShort = "A framed image";
		model = "Source_Files\DadaPlaceables\Configs\PictureFrame_Square.p3d";
		itemSize[] = {3,4};
		weight = 1000;
		rotationFlags = 64;
		itemBehaviour = 1;
		hiddenSelections[] = {"Frame","Picture"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaPlaceables\Configs\data\Frame_co.paa","Source_Files\DadaPlaceables\Configs\data\Painting_co.paa"};
		hiddenSelectionsMaterials[] = {"Source_Files\DadaPlaceables\Configs\data\Frame.rvmat","Source_Files\DadaPlaceables\Configs\data\Painting.rvmat"};
	};

    class Dada_InHandsPlaceable_Painting_Portrait: Dada_InHandsPlaceable_Colorbase
	{
		scope = 2;
		displayName = "Framed Painting";
		descriptionShort = "A framed image";
		model = "Source_Files\DadaPlaceables\Configs\PictureFrame_Portrait.p3d";
		itemSize[] = {3,4};
		weight = 1000;
		rotationFlags = 64;
		itemBehaviour = 1;
		hiddenSelections[] = {"Frame","Picture"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaPlaceables\Configs\data\Frame_co.paa","Source_Files\DadaPlaceables\Configs\data\Painting_co.paa"};
		hiddenSelectionsMaterials[] = {"Source_Files\DadaPlaceables\Configs\data\Frame.rvmat","Source_Files\DadaPlaceables\Configs\data\Painting.rvmat"};
	};

    class Dada_InHandsPlaceable_Painting_Landscape: Dada_InHandsPlaceable_Colorbase
	{
		scope = 2;
		displayName = "Framed Painting";
		descriptionShort = "A framed image";
		model = "Source_Files\DadaPlaceables\Configs\PictureFrame_Landscape.p3d";
		itemSize[] = {3,4};
		weight = 1000;
		rotationFlags = 64;
		itemBehaviour = 1;
		hiddenSelections[] = {"Frame","Picture"};
		hiddenSelectionsTextures[] = {"Source_Files\DadaPlaceables\Configs\data\Frame_co.paa","Source_Files\DadaPlaceables\Configs\data\Painting_co.paa"};
		hiddenSelectionsMaterials[] = {"Source_Files\DadaPlaceables\Configs\data\Frame.rvmat","Source_Files\DadaPlaceables\Configs\data\Painting.rvmat"};
	};

	//////////////////// Picture Square

	class Dada_InHandsPlaceable_Picture_Square_Playa: Dada_InHandsPlaceable_PictureFrame_Square
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"Source_Files\DadaPlaceables\Configs\data\Frame_co.paa","Source_Files\DadaPlaceables\Configs\data\Picture_Square_Playa_co.paa"};
	};

	//////////////////// Picture Portrait

	//////////////////// Picture Landscape

	//////////////////// Painting Square

	//////////////////// Painting Portrait

	class Dada_InHandsPlaceable_Painting_Portrait_ColorfulLady: Dada_InHandsPlaceable_Painting_Portrait
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"Source_Files\DadaPlaceables\Configs\data\Frame_co.paa","Source_Files\DadaPlaceables\Configs\data\Painting_Portrait_ColorfulLady_co.paa"};
	};

	//////////////////// Painting Landscape

	class Dada_InHandsPlaceable_Painting_Landscape_Home: Dada_InHandsPlaceable_Painting_Landscape
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"Source_Files\DadaPlaceables\Configs\data\Frame_co.paa","Source_Files\DadaPlaceables\Configs\data\Painting_Landscape_Home_co.paa"};
	};
};    
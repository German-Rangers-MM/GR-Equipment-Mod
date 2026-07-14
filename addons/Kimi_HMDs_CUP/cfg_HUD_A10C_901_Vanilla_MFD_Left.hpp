class MFD_Left
{
	topLeft = "MFD_1_top_left";
	topRight = "MFD_1_top_right";
	bottomLeft = "MFD_1_bottom_left";
	borderLeft = 0;
	borderRight = 0;
	borderTop = 0.1;
	borderBottom = 0;
	color[] = {0.15,1.0,0.15,1.0};
	enableParallax = 0;
	class Bones
	{
		class PylonAmmo1
		{
			type = "linear";
			source = "PylonAmmoRelative";
			sourceIndex = 1;
			sourceScale = 1.0;
			min = 0;
			max = 1;
			minPos[] = {0,0};
			maxPos[] = {0,0.0517578};
		};
		class PylonAmmo2: PylonAmmo1
		{
			sourceIndex = 2;
		};
		class PylonAmmo3: PylonAmmo1
		{
			sourceIndex = 3;
		};
		class PylonAmmo4: PylonAmmo1
		{
			sourceIndex = 4;
		};
		class PylonAmmo5: PylonAmmo1
		{
			sourceIndex = 5;
		};
		class PylonAmmo6: PylonAmmo1
		{
			sourceIndex = 6;
		};
		class PylonAmmo7: PylonAmmo1
		{
			sourceIndex = 7;
		};
		class PylonAmmo8: PylonAmmo1
		{
			sourceIndex = 8;
		};
		class PylonAmmo9: PylonAmmo1
		{
			sourceIndex = 9;
		};
		class PylonAmmo10: PylonAmmo1
		{
			sourceIndex = 10;
		};
	};
	class Draw
	{
		color[] = {0,0.84,0,1};
		alpha = 1;
		condition = "on";
		class PylonSelected6
		{
			condition = "PylonSelected6>0";
			class NotEmpty
			{
				color[] = {0.59,0.3,0,1};
				condition = "PylonAmmoRelative6>0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.113477,0.157633},1},{{0.113477,0.244547},1},{{0.322461,0.244547},1},{{0.322461,0.157633},1},{{0.113477,0.157633},1},{},{{0.322344,0.226969},1},{{0.3575,0.226969},1},{{0.3575,0.175211},1},{{0.322344,0.175211},1},{{0.322344,0.226969},1}};
					};
				};
				class PolyBar
				{
					type = "polygon";
					points[] = {{{{0.322344,0.226969},1},{{0.3575,0.226969},1},{"PylonAmmo6",{0.3575,0.175211},1},{"PylonAmmo6",{0.322344,0.175211},1}}};
				};
				class WeapName
				{
					type = "text";
					source = "PylonMagazineName";
					sourceindex = 6;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.127148,0.163727},1};
					right[] = {{0.163281,0.163727},1};
					down[] = {{0.127148,0.198883},1};
				};
				class MagName
				{
					type = "text";
					source = "PylonMagazineNameShort";
					sourceindex = 6;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.127148,0.203727},1};
					right[] = {{0.163281,0.203727},1};
					down[] = {{0.127148,0.238883},1};
				};
				class MagCount
				{
					type = "text";
					source = "PylonAmmo";
					sourceindex = 6;
					sourceScale = 1;
					align = "left";
					scale = 1;
					pos[] = {{0.307148,0.203727},1};
					right[] = {{0.343281,0.203727},1};
					down[] = {{0.307148,0.238883},1};
				};
			};
			class Empty
			{
				color[] = {1.0,0.0,0.0,1.0};
				condition = "PylonAmmoRelative6<=0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.322344,0.226969},1},{{0.3575,0.226969},1},{{0.3575,0.175211},1},{{0.322344,0.175211},1},{{0.322344,0.226969},1}};
					};
					class Poly
					{
						type = "polygon";
						points[] = {{{{0.113477,0.157633},1},{{0.113477,0.244547},1},{{0.322461,0.244547},1},{{0.322461,0.157633},1}}};
					};
				};
				class black
				{
					color[] = {1.0,0.0,0.0,1.0};
					class MagName
					{
						type = "text";
						source = "PylonMagazineNameShort";
						sourceindex = 6;
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.127148,0.163492},1};
						right[] = {{0.14375,0.163492},1};
						down[] = {{0.127148,0.188883},1};
					};
				};
			};
		};
		class Pylon6
		{
			condition = "PylonSelected6<=0";
			class NotEmpty
			{
				color[] = {0,0.84,0,1};
				condition = "PylonAmmoRelative6>0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.113477,0.157633},1},{{0.113477,0.244547},1},{{0.322461,0.244547},1},{{0.322461,0.157633},1},{{0.113477,0.157633},1},{},{{0.322344,0.226969},1},{{0.3575,0.226969},1},{{0.3575,0.175211},1},{{0.322344,0.175211},1},{{0.322344,0.226969},1}};
					};
				};
				class PolyBar
				{
					type = "polygon";
					points[] = {{{{0.322344,0.226969},1},{{0.3575,0.226969},1},{"PylonAmmo6",{0.3575,0.175211},1},{"PylonAmmo6",{0.322344,0.175211},1}}};
				};
				class WeapName
				{
					type = "text";
					source = "PylonMagazineName";
					sourceindex = 6;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.127148,0.163727},1};
					right[] = {{0.163281,0.163727},1};
					down[] = {{0.127148,0.198883},1};
				};
				class MagName
				{
					type = "text";
					source = "PylonMagazineNameShort";
					sourceindex = 6;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.127148,0.203727},1};
					right[] = {{0.163281,0.203727},1};
					down[] = {{0.127148,0.238883},1};
				};
				class MagCount
				{
					type = "text";
					source = "PylonAmmo";
					sourceindex = 6;
					sourceScale = 1;
					align = "left";
					scale = 1;
					pos[] = {{0.307148,0.203727},1};
					right[] = {{0.343281,0.203727},1};
					down[] = {{0.307148,0.238883},1};
				};
			};
			class Empty
			{
				color[] = {1.0,0.0,0.0,1.0};
				condition = "PylonAmmoRelative6<=0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.322344,0.226969},1},{{0.3575,0.226969},1},{{0.3575,0.175211},1},{{0.322344,0.175211},1},{{0.322344,0.226969},1}};
					};
					class Poly
					{
						type = "polygon";
						points[] = {{{{0.113477,0.157633},1},{{0.113477,0.244547},1},{{0.322461,0.244547},1},{{0.322461,0.157633},1}}};
					};
				};
				class black
				{
					color[] = {1.0,0.0,0.0,1.0};
					class MagName
					{
						type = "text";
						source = "PylonMagazineNameShort";
						sourceindex = 6;
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.127148,0.163492},1};
						right[] = {{0.14375,0.163492},1};
						down[] = {{0.127148,0.188883},1};
					};
				};
			};
		};
		class PylonSelected7
		{
			condition = "PylonSelected7>0";
			class NotEmpty
			{
				color[] = {0.59,0.3,0,1};
				condition = "PylonAmmoRelative7>0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.113477,0.273844},1},{{0.113477,0.360758},1},{{0.322461,0.360758},1},{{0.322461,0.273844},1},{{0.113477,0.273844},1},{},{{0.322344,0.34318},1},{{0.3575,0.34318},1},{{0.3575,0.291422},1},{{0.322344,0.291422},1},{{0.322344,0.34318},1}};
					};
				};
				class PolyBar
				{
					type = "polygon";
					points[] = {{{{0.322344,0.34318},1},{{0.3575,0.34318},1},{"PylonAmmo7",{0.3575,0.291422},1},{"PylonAmmo7",{0.322344,0.291422},1}}};
				};
				class WeapName
				{
					type = "text";
					source = "PylonMagazineName";
					sourceindex = 7;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.127148,0.279938},1};
					right[] = {{0.163281,0.279938},1};
					down[] = {{0.127148,0.315094},1};
				};
				class MagName
				{
					type = "text";
					source = "PylonMagazineNameShort";
					sourceindex = 7;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.127148,0.319937},1};
					right[] = {{0.163281,0.319937},1};
					down[] = {{0.127148,0.355094},1};
				};
				class MagCount
				{
					type = "text";
					source = "PylonAmmo";
					sourceindex = 7;
					sourceScale = 1;
					align = "left";
					scale = 1;
					pos[] = {{0.307148,0.319937},1};
					right[] = {{0.343281,0.319937},1};
					down[] = {{0.307148,0.355094},1};
				};
			};
			class Empty
			{
				color[] = {1.0,0.0,0.0,1.0};
				condition = "PylonAmmoRelative7<=0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.322344,0.34318},1},{{0.3575,0.34318},1},{{0.3575,0.291422},1},{{0.322344,0.291422},1},{{0.322344,0.34318},1}};
					};
					class Poly
					{
						type = "polygon";
						points[] = {{{{0.113477,0.273844},1},{{0.113477,0.360758},1},{{0.322461,0.360758},1},{{0.322461,0.273844},1}}};
					};
				};
				class black
				{
					color[] = {1.0,0.0,0.0,1.0};
					class MagName
					{
						type = "text";
						source = "PylonMagazineNameShort";
						sourceindex = 7;
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.127148,0.279703},1};
						right[] = {{0.14375,0.279703},1};
						down[] = {{0.127148,0.305094},1};
					};
				};
			};
		};
		class Pylon7
		{
			condition = "PylonSelected7<=0";
			class NotEmpty
			{
				color[] = {0,0.84,0,1};
				condition = "PylonAmmoRelative7>0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.113477,0.273844},1},{{0.113477,0.360758},1},{{0.322461,0.360758},1},{{0.322461,0.273844},1},{{0.113477,0.273844},1},{},{{0.322344,0.34318},1},{{0.3575,0.34318},1},{{0.3575,0.291422},1},{{0.322344,0.291422},1},{{0.322344,0.34318},1}};
					};
				};
				class PolyBar
				{
					type = "polygon";
					points[] = {{{{0.322344,0.34318},1},{{0.3575,0.34318},1},{"PylonAmmo7",{0.3575,0.291422},1},{"PylonAmmo7",{0.322344,0.291422},1}}};
				};
				class WeapName
				{
					type = "text";
					source = "PylonMagazineName";
					sourceindex = 7;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.127148,0.279938},1};
					right[] = {{0.163281,0.279938},1};
					down[] = {{0.127148,0.315094},1};
				};
				class MagName
				{
					type = "text";
					source = "PylonMagazineNameShort";
					sourceindex = 7;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.127148,0.319937},1};
					right[] = {{0.163281,0.319937},1};
					down[] = {{0.127148,0.355094},1};
				};
				class MagCount
				{
					type = "text";
					source = "PylonAmmo";
					sourceindex = 7;
					sourceScale = 1;
					align = "left";
					scale = 1;
					pos[] = {{0.307148,0.319937},1};
					right[] = {{0.343281,0.319937},1};
					down[] = {{0.307148,0.355094},1};
				};
			};
			class Empty
			{
				color[] = {1.0,0.0,0.0,1.0};
				condition = "PylonAmmoRelative7<=0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.322344,0.34318},1},{{0.3575,0.34318},1},{{0.3575,0.291422},1},{{0.322344,0.291422},1},{{0.322344,0.34318},1}};
					};
					class Poly
					{
						type = "polygon";
						points[] = {{{{0.113477,0.273844},1},{{0.113477,0.360758},1},{{0.322461,0.360758},1},{{0.322461,0.273844},1}}};
					};
				};
				class black
				{
					color[] = {1.0,0.0,0.0,1.0};
					class MagName
					{
						type = "text";
						source = "PylonMagazineNameShort";
						sourceindex = 7;
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.127148,0.279703},1};
						right[] = {{0.14375,0.279703},1};
						down[] = {{0.127148,0.305094},1};
					};
				};
			};
		};
		class PylonSelected8
		{
			condition = "PylonSelected8>0";
			class NotEmpty
			{
				color[] = {0.59,0.3,0,1};
				condition = "PylonAmmoRelative8>0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.113477,0.390055},1},{{0.113477,0.476969},1},{{0.322461,0.476969},1},{{0.322461,0.390055},1},{{0.113477,0.390055},1},{},{{0.322344,0.459391},1},{{0.3575,0.459391},1},{{0.3575,0.407633},1},{{0.322344,0.407633},1},{{0.322344,0.459391},1}};
					};
				};
				class PolyBar
				{
					type = "polygon";
					points[] = {{{{0.322344,0.459391},1},{{0.3575,0.459391},1},{"PylonAmmo8",{0.3575,0.407633},1},{"PylonAmmo8",{0.322344,0.407633},1}}};
				};
				class WeapName
				{
					type = "text";
					source = "PylonMagazineName";
					sourceindex = 8;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.127148,0.396148},1};
					right[] = {{0.163281,0.396148},1};
					down[] = {{0.127148,0.431305},1};
				};
				class MagName
				{
					type = "text";
					source = "PylonMagazineNameShort";
					sourceindex = 8;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.127148,0.436148},1};
					right[] = {{0.163281,0.436148},1};
					down[] = {{0.127148,0.471305},1};
				};
				class MagCount
				{
					type = "text";
					source = "PylonAmmo";
					sourceindex = 8;
					sourceScale = 1;
					align = "left";
					scale = 1;
					pos[] = {{0.307148,0.436148},1};
					right[] = {{0.343281,0.436148},1};
					down[] = {{0.307148,0.471305},1};
				};
			};
			class Empty
			{
				color[] = {1.0,0.0,0.0,1.0};
				condition = "PylonAmmoRelative8<=0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.322344,0.459391},1},{{0.3575,0.459391},1},{{0.3575,0.407633},1},{{0.322344,0.407633},1},{{0.322344,0.459391},1}};
					};
					class Poly
					{
						type = "polygon";
						points[] = {{{{0.113477,0.390055},1},{{0.113477,0.476969},1},{{0.322461,0.476969},1},{{0.322461,0.390055},1}}};
					};
				};
				class black
				{
					color[] = {1.0,0.0,0.0,1.0};
					class MagName
					{
						type = "text";
						source = "PylonMagazineNameShort";
						sourceindex = 8;
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.127148,0.395914},1};
						right[] = {{0.14375,0.395914},1};
						down[] = {{0.127148,0.421305},1};
					};
				};
			};
		};
		class Pylon8
		{
			condition = "PylonSelected8<=0";
			class NotEmpty
			{
				color[] = {0,0.84,0,1};
				condition = "PylonAmmoRelative8>0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.113477,0.390055},1},{{0.113477,0.476969},1},{{0.322461,0.476969},1},{{0.322461,0.390055},1},{{0.113477,0.390055},1},{},{{0.322344,0.459391},1},{{0.3575,0.459391},1},{{0.3575,0.407633},1},{{0.322344,0.407633},1},{{0.322344,0.459391},1}};
					};
				};
				class PolyBar
				{
					type = "polygon";
					points[] = {{{{0.322344,0.459391},1},{{0.3575,0.459391},1},{"PylonAmmo8",{0.3575,0.407633},1},{"PylonAmmo8",{0.322344,0.407633},1}}};
				};
				class WeapName
				{
					type = "text";
					source = "PylonMagazineName";
					sourceindex = 8;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.127148,0.396148},1};
					right[] = {{0.163281,0.396148},1};
					down[] = {{0.127148,0.431305},1};
				};
				class MagName
				{
					type = "text";
					source = "PylonMagazineNameShort";
					sourceindex = 8;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.127148,0.436148},1};
					right[] = {{0.163281,0.436148},1};
					down[] = {{0.127148,0.471305},1};
				};
				class MagCount
				{
					type = "text";
					source = "PylonAmmo";
					sourceindex = 8;
					sourceScale = 1;
					align = "left";
					scale = 1;
					pos[] = {{0.307148,0.436148},1};
					right[] = {{0.343281,0.436148},1};
					down[] = {{0.307148,0.471305},1};
				};
			};
			class Empty
			{
				color[] = {1.0,0.0,0.0,1.0};
				condition = "PylonAmmoRelative8<=0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.322344,0.459391},1},{{0.3575,0.459391},1},{{0.3575,0.407633},1},{{0.322344,0.407633},1},{{0.322344,0.459391},1}};
					};
					class Poly
					{
						type = "polygon";
						points[] = {{{{0.113477,0.390055},1},{{0.113477,0.476969},1},{{0.322461,0.476969},1},{{0.322461,0.390055},1}}};
					};
				};
				class black
				{
					color[] = {1.0,0.0,0.0,1.0};
					class MagName
					{
						type = "text";
						source = "PylonMagazineNameShort";
						sourceindex = 8;
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.127148,0.395914},1};
						right[] = {{0.14375,0.395914},1};
						down[] = {{0.127148,0.421305},1};
					};
				};
			};
		};
		class PylonSelected9
		{
			condition = "PylonSelected9>0";
			class NotEmpty
			{
				color[] = {0.59,0.3,0,1};
				condition = "PylonAmmoRelative9>0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.113477,0.506266},1},{{0.113477,0.59318},1},{{0.322461,0.59318},1},{{0.322461,0.506266},1},{{0.113477,0.506266},1},{},{{0.322344,0.575602},1},{{0.3575,0.575602},1},{{0.3575,0.523844},1},{{0.322344,0.523844},1},{{0.322344,0.575602},1}};
					};
				};
				class PolyBar
				{
					type = "polygon";
					points[] = {{{{0.322344,0.575602},1},{{0.3575,0.575602},1},{"PylonAmmo9",{0.3575,0.523844},1},{"PylonAmmo9",{0.322344,0.523844},1}}};
				};
				class WeapName
				{
					type = "text";
					source = "PylonMagazineName";
					sourceindex = 9;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.127148,0.512359},1};
					right[] = {{0.163281,0.512359},1};
					down[] = {{0.127148,0.547516},1};
				};
				class MagName
				{
					type = "text";
					source = "PylonMagazineNameShort";
					sourceindex = 9;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.127148,0.552359},1};
					right[] = {{0.163281,0.552359},1};
					down[] = {{0.127148,0.587516},1};
				};
				class MagCount
				{
					type = "text";
					source = "PylonAmmo";
					sourceindex = 9;
					sourceScale = 1;
					align = "left";
					scale = 1;
					pos[] = {{0.307148,0.552359},1};
					right[] = {{0.343281,0.552359},1};
					down[] = {{0.307148,0.587516},1};
				};
			};
			class Empty
			{
				color[] = {1.0,0.0,0.0,1.0};
				condition = "PylonAmmoRelative9<=0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.322344,0.575602},1},{{0.3575,0.575602},1},{{0.3575,0.523844},1},{{0.322344,0.523844},1},{{0.322344,0.575602},1}};
					};
					class Poly
					{
						type = "polygon";
						points[] = {{{{0.113477,0.506266},1},{{0.113477,0.59318},1},{{0.322461,0.59318},1},{{0.322461,0.506266},1}}};
					};
				};
				class black
				{
					color[] = {1.0,0.0,0.0,1.0};
					class MagName
					{
						type = "text";
						source = "PylonMagazineNameShort";
						sourceindex = 9;
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.127148,0.512125},1};
						right[] = {{0.14375,0.512125},1};
						down[] = {{0.127148,0.537516},1};
					};
				};
			};
		};
		class Pylon9
		{
			condition = "PylonSelected9<=0";
			class NotEmpty
			{
				color[] = {0,0.84,0,1};
				condition = "PylonAmmoRelative9>0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.113477,0.506266},1},{{0.113477,0.59318},1},{{0.322461,0.59318},1},{{0.322461,0.506266},1},{{0.113477,0.506266},1},{},{{0.322344,0.575602},1},{{0.3575,0.575602},1},{{0.3575,0.523844},1},{{0.322344,0.523844},1},{{0.322344,0.575602},1}};
					};
				};
				class PolyBar
				{
					type = "polygon";
					points[] = {{{{0.322344,0.575602},1},{{0.3575,0.575602},1},{"PylonAmmo9",{0.3575,0.523844},1},{"PylonAmmo9",{0.322344,0.523844},1}}};
				};
				class WeapName
				{
					type = "text";
					source = "PylonMagazineName";
					sourceindex = 9;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.127148,0.512359},1};
					right[] = {{0.163281,0.512359},1};
					down[] = {{0.127148,0.547516},1};
				};
				class MagName
				{
					type = "text";
					source = "PylonMagazineNameShort";
					sourceindex = 9;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.127148,0.552359},1};
					right[] = {{0.163281,0.552359},1};
					down[] = {{0.127148,0.587516},1};
				};
				class MagCount
				{
					type = "text";
					source = "PylonAmmo";
					sourceindex = 9;
					sourceScale = 1;
					align = "left";
					scale = 1;
					pos[] = {{0.307148,0.552359},1};
					right[] = {{0.343281,0.552359},1};
					down[] = {{0.307148,0.587516},1};
				};
			};
			class Empty
			{
				color[] = {1.0,0.0,0.0,1.0};
				condition = "PylonAmmoRelative9<=0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.322344,0.575602},1},{{0.3575,0.575602},1},{{0.3575,0.523844},1},{{0.322344,0.523844},1},{{0.322344,0.575602},1}};
					};
					class Poly
					{
						type = "polygon";
						points[] = {{{{0.113477,0.506266},1},{{0.113477,0.59318},1},{{0.322461,0.59318},1},{{0.322461,0.506266},1}}};
					};
				};
				class black
				{
					color[] = {1.0,0.0,0.0,1.0};
					class MagName
					{
						type = "text";
						source = "PylonMagazineNameShort";
						sourceindex = 9;
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.127148,0.512125},1};
						right[] = {{0.14375,0.512125},1};
						down[] = {{0.127148,0.537516},1};
					};
				};
			};
		};
		class PylonSelected10
		{
			condition = "PylonSelected10>0";
			class NotEmpty
			{
				color[] = {0.59,0.3,0,1};
				condition = "PylonAmmoRelative10>0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.113477,0.622477},1},{{0.113477,0.709391},1},{{0.322461,0.709391},1},{{0.322461,0.622477},1},{{0.113477,0.622477},1},{},{{0.322344,0.691813},1},{{0.3575,0.691813},1},{{0.3575,0.640055},1},{{0.322344,0.640055},1},{{0.322344,0.691813},1}};
					};
				};
				class PolyBar
				{
					type = "polygon";
					points[] = {{{{0.322344,0.691813},1},{{0.3575,0.691813},1},{"PylonAmmo10",{0.3575,0.640055},1},{"PylonAmmo10",{0.322344,0.640055},1}}};
				};
				class WeapName
				{
					type = "text";
					source = "PylonMagazineName";
					sourceindex = 10;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.127148,0.62857},1};
					right[] = {{0.163281,0.62857},1};
					down[] = {{0.127148,0.663727},1};
				};
				class MagName
				{
					type = "text";
					source = "PylonMagazineNameShort";
					sourceindex = 10;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.127148,0.66857},1};
					right[] = {{0.163281,0.66857},1};
					down[] = {{0.127148,0.703727},1};
				};
				class MagCount
				{
					type = "text";
					source = "PylonAmmo";
					sourceindex = 10;
					sourceScale = 1;
					align = "left";
					scale = 1;
					pos[] = {{0.307148,0.66857},1};
					right[] = {{0.343281,0.66857},1};
					down[] = {{0.307148,0.703727},1};
				};
			};
			class Empty
			{
				color[] = {1.0,0.0,0.0,1.0};
				condition = "PylonAmmoRelative10<=0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.322344,0.691813},1},{{0.3575,0.691813},1},{{0.3575,0.640055},1},{{0.322344,0.640055},1},{{0.322344,0.691813},1}};
					};
					class Poly
					{
						type = "polygon";
						points[] = {{{{0.113477,0.622477},1},{{0.113477,0.709391},1},{{0.322461,0.709391},1},{{0.322461,0.622477},1}}};
					};
				};
				class black
				{
					color[] = {1.0,0.0,0.0,1.0};
					class MagName
					{
						type = "text";
						source = "PylonMagazineNameShort";
						sourceindex = 10;
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.127148,0.628336},1};
						right[] = {{0.14375,0.628336},1};
						down[] = {{0.127148,0.653727},1};
					};
				};
			};
		};
		class Pylon10
		{
			condition = "PylonSelected10<=0";
			class NotEmpty
			{
				color[] = {0,0.84,0,1};
				condition = "PylonAmmoRelative10>0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.113477,0.622477},1},{{0.113477,0.709391},1},{{0.322461,0.709391},1},{{0.322461,0.622477},1},{{0.113477,0.622477},1},{},{{0.322344,0.691813},1},{{0.3575,0.691813},1},{{0.3575,0.640055},1},{{0.322344,0.640055},1},{{0.322344,0.691813},1}};
					};
				};
				class PolyBar
				{
					type = "polygon";
					points[] = {{{{0.322344,0.691813},1},{{0.3575,0.691813},1},{"PylonAmmo10",{0.3575,0.640055},1},{"PylonAmmo10",{0.322344,0.640055},1}}};
				};
				class WeapName
				{
					type = "text";
					source = "PylonMagazineName";
					sourceindex = 10;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.127148,0.62857},1};
					right[] = {{0.163281,0.62857},1};
					down[] = {{0.127148,0.663727},1};
				};
				class MagName
				{
					type = "text";
					source = "PylonMagazineNameShort";
					sourceindex = 10;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.127148,0.66857},1};
					right[] = {{0.163281,0.66857},1};
					down[] = {{0.127148,0.703727},1};
				};
				class MagCount
				{
					type = "text";
					source = "PylonAmmo";
					sourceindex = 10;
					sourceScale = 1;
					align = "left";
					scale = 1;
					pos[] = {{0.307148,0.66857},1};
					right[] = {{0.343281,0.66857},1};
					down[] = {{0.307148,0.703727},1};
				};
			};
			class Empty
			{
				color[] = {1.0,0.0,0.0,1.0};
				condition = "PylonAmmoRelative10<=0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.322344,0.691813},1},{{0.3575,0.691813},1},{{0.3575,0.640055},1},{{0.322344,0.640055},1},{{0.322344,0.691813},1}};
					};
					class Poly
					{
						type = "polygon";
						points[] = {{{{0.113477,0.622477},1},{{0.113477,0.709391},1},{{0.322461,0.709391},1},{{0.322461,0.622477},1}}};
					};
				};
				class black
				{
					color[] = {1.0,0.0,0.0,1.0};
					class MagName
					{
						type = "text";
						source = "PylonMagazineNameShort";
						sourceindex = 10;
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.127148,0.628336},1};
						right[] = {{0.14375,0.628336},1};
						down[] = {{0.127148,0.653727},1};
					};
				};
			};
		};
		class PylonSelected5
		{
			condition = "PylonSelected5>0";
			class NotEmpty
			{
				color[] = {0.59,0.3,0,1};
				condition = "PylonAmmoRelative5>0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.703477,0.157633},1},{{0.703477,0.244547},1},{{0.912461,0.244547},1},{{0.912461,0.157633},1},{{0.703477,0.157633},1},{},{{0.667344,0.226969},1},{{0.7025,0.226969},1},{{0.7025,0.175211},1},{{0.667344,0.175211},1},{{0.667344,0.226969},1}};
					};
				};
				class PolyBar
				{
					type = "polygon";
					points[] = {{{{0.667344,0.226969},1},{{0.7025,0.226969},1},{"PylonAmmo5",{0.7025,0.175211},1},{"PylonAmmo5",{0.667344,0.175211},1}}};
				};
				class WeapName
				{
					type = "text";
					source = "PylonMagazineName";
					sourceindex = 5;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.717148,0.163727},1};
					right[] = {{0.753281,0.163727},1};
					down[] = {{0.717148,0.198883},1};
				};
				class MagName
				{
					type = "text";
					source = "PylonMagazineNameShort";
					sourceindex = 5;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.717148,0.203727},1};
					right[] = {{0.753281,0.203727},1};
					down[] = {{0.717148,0.238883},1};
				};
				class MagCount
				{
					type = "text";
					source = "PylonAmmo";
					sourceindex = 5;
					sourceScale = 1;
					align = "left";
					scale = 1;
					pos[] = {{0.897148,0.203727},1};
					right[] = {{0.933281,0.203727},1};
					down[] = {{0.897148,0.238883},1};
				};
			};
			class Empty
			{
				color[] = {1.0,0.0,0.0,1.0};
				condition = "PylonAmmoRelative5<=0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.667344,0.226969},1},{{0.7025,0.226969},1},{{0.7025,0.175211},1},{{0.667344,0.175211},1},{{0.667344,0.226969},1}};
					};
					class Poly
					{
						type = "polygon";
						points[] = {{{{0.703477,0.157633},1},{{0.703477,0.244547},1},{{0.912461,0.244547},1},{{0.912461,0.157633},1}}};
					};
				};
				class black
				{
					color[] = {1.0,0.0,0.0,1.0};
					class MagName
					{
						type = "text";
						source = "PylonMagazineNameShort";
						sourceindex = 5;
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.717148,0.163492},1};
						right[] = {{0.73375,0.163492},1};
						down[] = {{0.717148,0.188883},1};
					};
				};
			};
		};
		class Pylon5
		{
			condition = "PylonSelected5<=0";
			class NotEmpty
			{
				color[] = {0,0.84,0,1};
				condition = "PylonAmmoRelative5>0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.703477,0.157633},1},{{0.703477,0.244547},1},{{0.912461,0.244547},1},{{0.912461,0.157633},1},{{0.703477,0.157633},1},{},{{0.667344,0.226969},1},{{0.7025,0.226969},1},{{0.7025,0.175211},1},{{0.667344,0.175211},1},{{0.667344,0.226969},1}};
					};
				};
				class PolyBar
				{
					type = "polygon";
					points[] = {{{{0.667344,0.226969},1},{{0.7025,0.226969},1},{"PylonAmmo5",{0.7025,0.175211},1},{"PylonAmmo5",{0.667344,0.175211},1}}};
				};
				class WeapName
				{
					type = "text";
					source = "PylonMagazineName";
					sourceindex = 5;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.717148,0.163727},1};
					right[] = {{0.753281,0.163727},1};
					down[] = {{0.717148,0.198883},1};
				};
				class MagName
				{
					type = "text";
					source = "PylonMagazineNameShort";
					sourceindex = 5;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.717148,0.203727},1};
					right[] = {{0.753281,0.203727},1};
					down[] = {{0.717148,0.238883},1};
				};
				class MagCount
				{
					type = "text";
					source = "PylonAmmo";
					sourceindex = 5;
					sourceScale = 1;
					align = "left";
					scale = 1;
					pos[] = {{0.897148,0.203727},1};
					right[] = {{0.933281,0.203727},1};
					down[] = {{0.897148,0.238883},1};
				};
			};
			class Empty
			{
				color[] = {1.0,0.0,0.0,1.0};
				condition = "PylonAmmoRelative5<=0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.667344,0.226969},1},{{0.7025,0.226969},1},{{0.7025,0.175211},1},{{0.667344,0.175211},1},{{0.667344,0.226969},1}};
					};
					class Poly
					{
						type = "polygon";
						points[] = {{{{0.703477,0.157633},1},{{0.703477,0.244547},1},{{0.912461,0.244547},1},{{0.912461,0.157633},1}}};
					};
				};
				class black
				{
					color[] = {1.0,0.0,0.0,1.0};
					class MagName
					{
						type = "text";
						source = "PylonMagazineNameShort";
						sourceindex = 5;
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.717148,0.163492},1};
						right[] = {{0.73375,0.163492},1};
						down[] = {{0.717148,0.188883},1};
					};
				};
			};
		};
		class PylonSelected4
		{
			condition = "PylonSelected4>0";
			class NotEmpty
			{
				color[] = {0.59,0.3,0,1};
				condition = "PylonAmmoRelative4>0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.703477,0.273844},1},{{0.703477,0.360758},1},{{0.912461,0.360758},1},{{0.912461,0.273844},1},{{0.703477,0.273844},1},{},{{0.667344,0.34318},1},{{0.7025,0.34318},1},{{0.7025,0.291422},1},{{0.667344,0.291422},1},{{0.667344,0.34318},1}};
					};
				};
				class PolyBar
				{
					type = "polygon";
					points[] = {{{{0.667344,0.34318},1},{{0.7025,0.34318},1},{"PylonAmmo4",{0.7025,0.291422},1},{"PylonAmmo4",{0.667344,0.291422},1}}};
				};
				class WeapName
				{
					type = "text";
					source = "PylonMagazineName";
					sourceindex = 4;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.717148,0.279938},1};
					right[] = {{0.753281,0.279938},1};
					down[] = {{0.717148,0.315094},1};
				};
				class MagName
				{
					type = "text";
					source = "PylonMagazineNameShort";
					sourceindex = 4;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.717148,0.319937},1};
					right[] = {{0.753281,0.319937},1};
					down[] = {{0.717148,0.355094},1};
				};
				class MagCount
				{
					type = "text";
					source = "PylonAmmo";
					sourceindex = 4;
					sourceScale = 1;
					align = "left";
					scale = 1;
					pos[] = {{0.897148,0.319937},1};
					right[] = {{0.933281,0.319937},1};
					down[] = {{0.897148,0.355094},1};
				};
			};
			class Empty
			{
				color[] = {1.0,0.0,0.0,1.0};
				condition = "PylonAmmoRelative4<=0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.667344,0.34318},1},{{0.7025,0.34318},1},{{0.7025,0.291422},1},{{0.667344,0.291422},1},{{0.667344,0.34318},1}};
					};
					class Poly
					{
						type = "polygon";
						points[] = {{{{0.703477,0.273844},1},{{0.703477,0.360758},1},{{0.912461,0.360758},1},{{0.912461,0.273844},1}}};
					};
				};
				class black
				{
					color[] = {1.0,0.0,0.0,1.0};
					class MagName
					{
						type = "text";
						source = "PylonMagazineNameShort";
						sourceindex = 4;
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.717148,0.279703},1};
						right[] = {{0.73375,0.279703},1};
						down[] = {{0.717148,0.305094},1};
					};
				};
			};
		};
		class Pylon4
		{
			condition = "PylonSelected4<=0";
			class NotEmpty
			{
				color[] = {0,0.84,0,1};
				condition = "PylonAmmoRelative4>0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.703477,0.273844},1},{{0.703477,0.360758},1},{{0.912461,0.360758},1},{{0.912461,0.273844},1},{{0.703477,0.273844},1},{},{{0.667344,0.34318},1},{{0.7025,0.34318},1},{{0.7025,0.291422},1},{{0.667344,0.291422},1},{{0.667344,0.34318},1}};
					};
				};
				class PolyBar
				{
					type = "polygon";
					points[] = {{{{0.667344,0.34318},1},{{0.7025,0.34318},1},{"PylonAmmo4",{0.7025,0.291422},1},{"PylonAmmo4",{0.667344,0.291422},1}}};
				};
				class WeapName
				{
					type = "text";
					source = "PylonMagazineName";
					sourceindex = 4;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.717148,0.279938},1};
					right[] = {{0.753281,0.279938},1};
					down[] = {{0.717148,0.315094},1};
				};
				class MagName
				{
					type = "text";
					source = "PylonMagazineNameShort";
					sourceindex = 4;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.717148,0.319937},1};
					right[] = {{0.753281,0.319937},1};
					down[] = {{0.717148,0.355094},1};
				};
				class MagCount
				{
					type = "text";
					source = "PylonAmmo";
					sourceindex = 4;
					sourceScale = 1;
					align = "left";
					scale = 1;
					pos[] = {{0.897148,0.319937},1};
					right[] = {{0.933281,0.319937},1};
					down[] = {{0.897148,0.355094},1};
				};
			};
			class Empty
			{
				color[] = {1.0,0.0,0.0,1.0};
				condition = "PylonAmmoRelative4<=0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.667344,0.34318},1},{{0.7025,0.34318},1},{{0.7025,0.291422},1},{{0.667344,0.291422},1},{{0.667344,0.34318},1}};
					};
					class Poly
					{
						type = "polygon";
						points[] = {{{{0.703477,0.273844},1},{{0.703477,0.360758},1},{{0.912461,0.360758},1},{{0.912461,0.273844},1}}};
					};
				};
				class black
				{
					color[] = {1.0,0.0,0.0,1.0};
					class MagName
					{
						type = "text";
						source = "PylonMagazineNameShort";
						sourceindex = 4;
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.717148,0.279703},1};
						right[] = {{0.73375,0.279703},1};
						down[] = {{0.717148,0.305094},1};
					};
				};
			};
		};
		class PylonSelected3
		{
			condition = "PylonSelected3>0";
			class NotEmpty
			{
				color[] = {0.59,0.3,0,1};
				condition = "PylonAmmoRelative3>0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.703477,0.390055},1},{{0.703477,0.476969},1},{{0.912461,0.476969},1},{{0.912461,0.390055},1},{{0.703477,0.390055},1},{},{{0.667344,0.459391},1},{{0.7025,0.459391},1},{{0.7025,0.407633},1},{{0.667344,0.407633},1},{{0.667344,0.459391},1}};
					};
				};
				class PolyBar
				{
					type = "polygon";
					points[] = {{{{0.667344,0.459391},1},{{0.7025,0.459391},1},{"PylonAmmo3",{0.7025,0.407633},1},{"PylonAmmo3",{0.667344,0.407633},1}}};
				};
				class WeapName
				{
					type = "text";
					source = "PylonMagazineName";
					sourceindex = 3;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.717148,0.396148},1};
					right[] = {{0.753281,0.396148},1};
					down[] = {{0.717148,0.431305},1};
				};
				class MagName
				{
					type = "text";
					source = "PylonMagazineNameShort";
					sourceindex = 3;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.717148,0.436148},1};
					right[] = {{0.753281,0.436148},1};
					down[] = {{0.717148,0.471305},1};
				};
				class MagCount
				{
					type = "text";
					source = "PylonAmmo";
					sourceindex = 3;
					sourceScale = 1;
					align = "left";
					scale = 1;
					pos[] = {{0.897148,0.436148},1};
					right[] = {{0.933281,0.436148},1};
					down[] = {{0.897148,0.471305},1};
				};
			};
			class Empty
			{
				color[] = {1.0,0.0,0.0,1.0};
				condition = "PylonAmmoRelative3<=0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.667344,0.459391},1},{{0.7025,0.459391},1},{{0.7025,0.407633},1},{{0.667344,0.407633},1},{{0.667344,0.459391},1}};
					};
					class Poly
					{
						type = "polygon";
						points[] = {{{{0.703477,0.390055},1},{{0.703477,0.476969},1},{{0.912461,0.476969},1},{{0.912461,0.390055},1}}};
					};
				};
				class black
				{
					color[] = {1.0,0.0,0.0,1.0};
					class MagName
					{
						type = "text";
						source = "PylonMagazineNameShort";
						sourceindex = 3;
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.717148,0.395914},1};
						right[] = {{0.73375,0.395914},1};
						down[] = {{0.717148,0.421305},1};
					};
				};
			};
		};
		class Pylon3
		{
			condition = "PylonSelected3<=0";
			class NotEmpty
			{
				color[] = {0,0.84,0,1};
				condition = "PylonAmmoRelative3>0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.703477,0.390055},1},{{0.703477,0.476969},1},{{0.912461,0.476969},1},{{0.912461,0.390055},1},{{0.703477,0.390055},1},{},{{0.667344,0.459391},1},{{0.7025,0.459391},1},{{0.7025,0.407633},1},{{0.667344,0.407633},1},{{0.667344,0.459391},1}};
					};
				};
				class PolyBar
				{
					type = "polygon";
					points[] = {{{{0.667344,0.459391},1},{{0.7025,0.459391},1},{"PylonAmmo3",{0.7025,0.407633},1},{"PylonAmmo3",{0.667344,0.407633},1}}};
				};
				class WeapName
				{
					type = "text";
					source = "PylonMagazineName";
					sourceindex = 3;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.717148,0.396148},1};
					right[] = {{0.753281,0.396148},1};
					down[] = {{0.717148,0.431305},1};
				};
				class MagName
				{
					type = "text";
					source = "PylonMagazineNameShort";
					sourceindex = 3;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.717148,0.436148},1};
					right[] = {{0.753281,0.436148},1};
					down[] = {{0.717148,0.471305},1};
				};
				class MagCount
				{
					type = "text";
					source = "PylonAmmo";
					sourceindex = 3;
					sourceScale = 1;
					align = "left";
					scale = 1;
					pos[] = {{0.897148,0.436148},1};
					right[] = {{0.933281,0.436148},1};
					down[] = {{0.897148,0.471305},1};
				};
			};
			class Empty
			{
				color[] = {1.0,0.0,0.0,1.0};
				condition = "PylonAmmoRelative3<=0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.667344,0.459391},1},{{0.7025,0.459391},1},{{0.7025,0.407633},1},{{0.667344,0.407633},1},{{0.667344,0.459391},1}};
					};
					class Poly
					{
						type = "polygon";
						points[] = {{{{0.703477,0.390055},1},{{0.703477,0.476969},1},{{0.912461,0.476969},1},{{0.912461,0.390055},1}}};
					};
				};
				class black
				{
					color[] = {1.0,0.0,0.0,1.0};
					class MagName
					{
						type = "text";
						source = "PylonMagazineNameShort";
						sourceindex = 3;
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.717148,0.395914},1};
						right[] = {{0.73375,0.395914},1};
						down[] = {{0.717148,0.421305},1};
					};
				};
			};
		};
		class PylonSelected2
		{
			condition = "PylonSelected2>0";
			class NotEmpty
			{
				color[] = {0.59,0.3,0,1};
				condition = "PylonAmmoRelative2>0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.703477,0.506266},1},{{0.703477,0.59318},1},{{0.912461,0.59318},1},{{0.912461,0.506266},1},{{0.703477,0.506266},1},{},{{0.667344,0.575602},1},{{0.7025,0.575602},1},{{0.7025,0.523844},1},{{0.667344,0.523844},1},{{0.667344,0.575602},1}};
					};
				};
				class PolyBar
				{
					type = "polygon";
					points[] = {{{{0.667344,0.575602},1},{{0.7025,0.575602},1},{"PylonAmmo2",{0.7025,0.523844},1},{"PylonAmmo2",{0.667344,0.523844},1}}};
				};
				class WeapName
				{
					type = "text";
					source = "PylonMagazineName";
					sourceindex = 2;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.717148,0.512359},1};
					right[] = {{0.753281,0.512359},1};
					down[] = {{0.717148,0.547516},1};
				};
				class MagName
				{
					type = "text";
					source = "PylonMagazineNameShort";
					sourceindex = 2;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.717148,0.552359},1};
					right[] = {{0.753281,0.552359},1};
					down[] = {{0.717148,0.587516},1};
				};
				class MagCount
				{
					type = "text";
					source = "PylonAmmo";
					sourceindex = 2;
					sourceScale = 1;
					align = "left";
					scale = 1;
					pos[] = {{0.897148,0.552359},1};
					right[] = {{0.933281,0.552359},1};
					down[] = {{0.897148,0.587516},1};
				};
			};
			class Empty
			{
				color[] = {1.0,0.0,0.0,1.0};
				condition = "PylonAmmoRelative2<=0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.667344,0.575602},1},{{0.7025,0.575602},1},{{0.7025,0.523844},1},{{0.667344,0.523844},1},{{0.667344,0.575602},1}};
					};
					class Poly
					{
						type = "polygon";
						points[] = {{{{0.703477,0.506266},1},{{0.703477,0.59318},1},{{0.912461,0.59318},1},{{0.912461,0.506266},1}}};
					};
				};
				class black
				{
					color[] = {1.0,0.0,0.0,1.0};
					class MagName
					{
						type = "text";
						source = "PylonMagazineNameShort";
						sourceindex = 2;
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.717148,0.512125},1};
						right[] = {{0.73375,0.512125},1};
						down[] = {{0.717148,0.537516},1};
					};
				};
			};
		};
		class Pylon2
		{
			condition = "PylonSelected2<=0";
			class NotEmpty
			{
				color[] = {0,0.84,0,1};
				condition = "PylonAmmoRelative2>0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.703477,0.506266},1},{{0.703477,0.59318},1},{{0.912461,0.59318},1},{{0.912461,0.506266},1},{{0.703477,0.506266},1},{},{{0.667344,0.575602},1},{{0.7025,0.575602},1},{{0.7025,0.523844},1},{{0.667344,0.523844},1},{{0.667344,0.575602},1}};
					};
				};
				class PolyBar
				{
					type = "polygon";
					points[] = {{{{0.667344,0.575602},1},{{0.7025,0.575602},1},{"PylonAmmo2",{0.7025,0.523844},1},{"PylonAmmo2",{0.667344,0.523844},1}}};
				};
				class WeapName
				{
					type = "text";
					source = "PylonMagazineName";
					sourceindex = 2;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.717148,0.512359},1};
					right[] = {{0.753281,0.512359},1};
					down[] = {{0.717148,0.547516},1};
				};
				class MagName
				{
					type = "text";
					source = "PylonMagazineNameShort";
					sourceindex = 2;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.717148,0.552359},1};
					right[] = {{0.753281,0.552359},1};
					down[] = {{0.717148,0.587516},1};
				};
				class MagCount
				{
					type = "text";
					source = "PylonAmmo";
					sourceindex = 2;
					sourceScale = 1;
					align = "left";
					scale = 1;
					pos[] = {{0.897148,0.552359},1};
					right[] = {{0.933281,0.552359},1};
					down[] = {{0.897148,0.587516},1};
				};
			};
			class Empty
			{
				color[] = {1.0,0.0,0.0,1.0};
				condition = "PylonAmmoRelative2<=0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.667344,0.575602},1},{{0.7025,0.575602},1},{{0.7025,0.523844},1},{{0.667344,0.523844},1},{{0.667344,0.575602},1}};
					};
					class Poly
					{
						type = "polygon";
						points[] = {{{{0.703477,0.506266},1},{{0.703477,0.59318},1},{{0.912461,0.59318},1},{{0.912461,0.506266},1}}};
					};
				};
				class black
				{
					color[] = {1.0,0.0,0.0,1.0};
					class MagName
					{
						type = "text";
						source = "PylonMagazineNameShort";
						sourceindex = 2;
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.717148,0.512125},1};
						right[] = {{0.73375,0.512125},1};
						down[] = {{0.717148,0.537516},1};
					};
				};
			};
		};
		class PylonSelected1
		{
			condition = "PylonSelected1>0";
			class NotEmpty
			{
				color[] = {0.59,0.3,0,1};
				condition = "PylonAmmoRelative1>0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.703477,0.622477},1},{{0.703477,0.709391},1},{{0.912461,0.709391},1},{{0.912461,0.622477},1},{{0.703477,0.622477},1},{},{{0.667344,0.691813},1},{{0.7025,0.691813},1},{{0.7025,0.640055},1},{{0.667344,0.640055},1},{{0.667344,0.691813},1}};
					};
				};
				class PolyBar
				{
					type = "polygon";
					points[] = {{{{0.667344,0.691813},1},{{0.7025,0.691813},1},{"PylonAmmo1",{0.7025,0.640055},1},{"PylonAmmo1",{0.667344,0.640055},1}}};
				};
				class WeapName
				{
					type = "text";
					source = "PylonMagazineName";
					sourceindex = 1;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.717148,0.62857},1};
					right[] = {{0.753281,0.62857},1};
					down[] = {{0.717148,0.663727},1};
				};
				class MagName
				{
					type = "text";
					source = "PylonMagazineNameShort";
					sourceindex = 1;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.717148,0.66857},1};
					right[] = {{0.753281,0.66857},1};
					down[] = {{0.717148,0.703727},1};
				};
				class MagCount
				{
					type = "text";
					source = "PylonAmmo";
					sourceindex = 1;
					sourceScale = 1;
					align = "left";
					scale = 1;
					pos[] = {{0.897148,0.66857},1};
					right[] = {{0.933281,0.66857},1};
					down[] = {{0.897148,0.703727},1};
				};
			};
			class Empty
			{
				color[] = {1.0,0.0,0.0,1.0};
				condition = "PylonAmmoRelative1<=0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.667344,0.691813},1},{{0.7025,0.691813},1},{{0.7025,0.640055},1},{{0.667344,0.640055},1},{{0.667344,0.691813},1}};
					};
					class Poly
					{
						type = "polygon";
						points[] = {{{{0.703477,0.622477},1},{{0.703477,0.709391},1},{{0.912461,0.709391},1},{{0.912461,0.622477},1}}};
					};
				};
				class black
				{
					color[] = {1.0,0.0,0.0,1.0};
					class MagName
					{
						type = "text";
						source = "PylonMagazineNameShort";
						sourceindex = 1;
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.717148,0.628336},1};
						right[] = {{0.73375,0.628336},1};
						down[] = {{0.717148,0.653727},1};
					};
				};
			};
		};
		class Pylon1
		{
			condition = "PylonSelected1<=0";
			class NotEmpty
			{
				color[] = {0,0.84,0,1};
				condition = "PylonAmmoRelative1>0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.703477,0.622477},1},{{0.703477,0.709391},1},{{0.912461,0.709391},1},{{0.912461,0.622477},1},{{0.703477,0.622477},1},{},{{0.667344,0.691813},1},{{0.7025,0.691813},1},{{0.7025,0.640055},1},{{0.667344,0.640055},1},{{0.667344,0.691813},1}};
					};
				};
				class PolyBar
				{
					type = "polygon";
					points[] = {{{{0.667344,0.691813},1},{{0.7025,0.691813},1},{"PylonAmmo1",{0.7025,0.640055},1},{"PylonAmmo1",{0.667344,0.640055},1}}};
				};
				class WeapName
				{
					type = "text";
					source = "PylonMagazineName";
					sourceindex = 1;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.717148,0.62857},1};
					right[] = {{0.753281,0.62857},1};
					down[] = {{0.717148,0.663727},1};
				};
				class MagName
				{
					type = "text";
					source = "PylonMagazineNameShort";
					sourceindex = 1;
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.717148,0.66857},1};
					right[] = {{0.753281,0.66857},1};
					down[] = {{0.717148,0.703727},1};
				};
				class MagCount
				{
					type = "text";
					source = "PylonAmmo";
					sourceindex = 1;
					sourceScale = 1;
					align = "left";
					scale = 1;
					pos[] = {{0.897148,0.66857},1};
					right[] = {{0.933281,0.66857},1};
					down[] = {{0.897148,0.703727},1};
				};
			};
			class Empty
			{
				color[] = {1.0,0.0,0.0,1.0};
				condition = "PylonAmmoRelative1<=0";
				class Static
				{
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.667344,0.691813},1},{{0.7025,0.691813},1},{{0.7025,0.640055},1},{{0.667344,0.640055},1},{{0.667344,0.691813},1}};
					};
					class Poly
					{
						type = "polygon";
						points[] = {{{{0.703477,0.622477},1},{{0.703477,0.709391},1},{{0.912461,0.709391},1},{{0.912461,0.622477},1}}};
					};
				};
				class black
				{
					color[] = {1.0,0.0,0.0,1.0};
					class MagName
					{
						type = "text";
						source = "PylonMagazineNameShort";
						sourceindex = 1;
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.717148,0.628336},1};
						right[] = {{0.73375,0.628336},1};
						down[] = {{0.717148,0.653727},1};
					};
				};
			};
		};
		class Gatling_Ammo
		{
			type = "text";
			source = "ammo";
			sourceIndex = 0;
			scale = 1;
			sourceScale = 1;
			align = "right";
			pos[] = {{0.435,0.86},1};
			right[] = {{0.475,0.86},1};
			down[] = {{0.435,0.891},1};
		};
		class CM_Name
		{
			type = "text";
			source = "CMWeapon";
			scale = 1;
			sourceScale = 1;
			align = "right";
			pos[] = {{0.725,0.83},1};
			right[] = {{0.765,0.83},1};
			down[] = {{0.725,0.861},1};
		};
		class CM_Ammo
		{
			type = "text";
			source = "CMAmmo";
			scale = 1;
			sourceScale = 1;
			align = "right";
			pos[] = {{0.725,0.86},1};
			right[] = {{0.765,0.86},1};
			down[] = {{0.725,0.891},1};
		};
	};
};
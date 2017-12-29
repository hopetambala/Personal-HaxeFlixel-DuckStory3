package;  

	import flixel.FlxG;
	import flixel.FlxObject;
	import flixel.FlxSprite;
	import flixel.FlxState;
	import flixel.group.FlxGroup;
	import flixel.text.FlxText;
	import flixel.tile.FlxTilemap;
	import flixel.util.FlxColor;
	import openfl.Assets;

	class DoorTile extends FlxSprite
	{
		
		public function new(X:Int,Y:Int):Void 
		{
			super(X, Y);
			new FlxSprite(FlxG.width / 4 - 5);
			makeGraphic(8, 8, FlxColor.BLUE);
			
		}
	}

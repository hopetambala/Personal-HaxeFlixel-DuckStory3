package;
	import org.flixel.*;
	import flixel.FlxG;
	import flixel.FlxObject;
	import flixel.FlxSprite;
	import flixel.FlxState;
	import flixel.group.FlxGroup;
	import flixel.text.FlxText;
	import flixel.tile.FlxTilemap;
	import flixel.util.FlxColor;
	import openfl.Assets;	
/*
	import flixel.input.gamepad.FlxGamepad;
	import flixel.input.gamepad.PS3ButtonID;
*/
	//englishClass sprite
	class Player2 extends FlxSprite
	{
		//private var _gamePad:FlxGamepad;

			
		public function new(X:Int, Y:Int):Void
		{
			
			super (X, Y);
			new FlxSprite(FlxG.width / 2 - 5);
			//loadGraphic("assets/mapTiles.png", false, 8, 8); wasn't working
			//makeGraphic(8, 8, FlxColor.CRIMSON);
			//loadGraphic(AssetPaths.wubbles__png, true, 16, 16);
			loadGraphic("assets/images/wubbles2.png", true, 16, 16);
			animation.add("walk", [0, 1, 0, 2], 5, true);
			animation.play("walk");

			maxVelocity.set(80, 200);
			acceleration.y = 175;
			drag.x = maxVelocity.x * 4;
			flipX = true;
			
		}
		
		override public function update():Void 
		{
			acceleration.x = 0;

		

			super.update();
		}


	}
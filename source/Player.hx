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
	class Player extends FlxSprite
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

			
		}
		
		override public function update():Void 
		{
			acceleration.x = 0;
			if(FlxG.keys.pressed.D)
				acceleration.x = maxVelocity.x*4;
			
			///////	
			if (FlxG.keys.pressed.A) 
			{ //if left is pressed
				
				flipX = true;
				acceleration.x = -maxVelocity.x * 4; //set acceleration for normal left
				
				if (FlxG.keys.justPressed.SHIFT && isTouching(FlxObject.FLOOR)) 
				{ //if shift is pressed for sprinting
					maxVelocity.x = 200; //set increased max velocity
					
				}
				if(FlxG.keys.justReleased.SHIFT)
				{ //returns keys to normal speed
					maxVelocity.x = 80;
				}
			}

			if (FlxG.keys.pressed.D) 
			{ //if left is pressed

				flipX= false;
				acceleration.x = maxVelocity.x * 4; //set acceleration for normal left
				
				if (FlxG.keys.pressed.SHIFT && isTouching(FlxObject.FLOOR)) 
				{ //if shift is pressed
					maxVelocity.x = 200; //set increased max velocity
					
				}
				if(FlxG.keys.justReleased.SHIFT)
				{
					maxVelocity.x = 80;
				}
			}
			
			
			if(FlxG.keys.pressed.SPACE && isTouching(FlxObject.FLOOR))
			{ //jump
				velocity.y = -maxVelocity.y/2;
			}	


			///////wall jump
			if(isTouching(FlxObject.WALL) && FlxG.keys.justPressed.SPACE && FlxG.keys.pressed.D)
			{
				velocity.x = -maxVelocity.x*8; 
				velocity.y = -maxVelocity.y/2;
				
			}

			if(isTouching(FlxObject.WALL) && FlxG.keys.justPressed.SPACE && FlxG.keys.pressed.A)
			{
				velocity.x = maxVelocity.x*8; 
				velocity.y = -maxVelocity.y/2;
				
			}

		

			super.update();
		}


	}
package; 

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.text.FlxText;
import flixel.tile.FlxTilemap;
import flixel.util.FlxColor;
import flixel.FlxCamera;
import openfl.Assets;


/**
 * ...
 * @author Don Vato
 */
class PlayState extends FlxState
{
	/*
	var map1:String = openfl.Assets.getText("assests/mapHits2.csv");
	var map2:String = openfl.Assets.getText("assets/mapHits3.csv");
	var door1:String = openfl.Assets.getText("assets/mapDoor1.csv");
	var door2:String = openfl.Assets.getText("assets/MapDoor2.csv");
	*/
	public var level:FlxTilemap;
	var room1:FlxTilemap;
	public var player:Player;
	//public var doorz:DoorTile;

	private var _currentRoom:String;



	private function makeRoom(whichRoom:String):FlxTilemap
	{	

		_currentRoom = whichRoom;


		//create our wall tilemap
		var tmpMap:FlxTilemap;
		tmpMap = new FlxTilemap();
		//tmpMap.auto = FlxTilemap.AUTO;
		tmpMap.loadMap(Assets.getText(_currentRoom), GraphicAuto, 0, 0, FlxTilemap.AUTO);
		//tmpMap.collideIndex = 1;
		
		tmpMap.follow();
		return tmpMap;
		
	}

	override public function create():Void 
	{
		FlxG.mouse.visible = false;
		FlxG.cameras.bgColor = 0xffaaaaaa;

		
		//add(doorz = new DoorTile(50,200));
		add(player = new Player(112,92));

		//room1 = makeRoom("assets/mapHits3.csv");
		room1 = makeRoom("assets/experim1.csv");
		add(room1);
		
		//FlxG.camera.follow(player, FlxCamera.STYLE_PLATFORMER);
		FlxG.camera.follow(player, FlxCamera.STYLE_SCREEN_BY_SCREEN,0);
		
	
		super.create();


	}

	override public function update():Void 
	{

		FlxG.collide(level, player);

		/*
		if (player.y > FlxG.height)
		{
			FlxG.resetState();
		}
		*/

		super.update();
		
	}

}